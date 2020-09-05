#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <semaphore.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(){
    int i;
    pid_t pid;
    sem_t *sem1;
    sem_t *sem2;

    sem1 = sem_open("/semaphore1", O_CREAT,  0644, 0);
    sem2 = sem_open("/semaphore2", O_CREAT,  0644, 1);
    pid = fork();

    if(pid < 0)
    	perror("Error\n");
    else if(pid == 0)
    {
        
        for (i = 1; i <= 10; i++)
        {
            sem_wait(sem1);
            printf("Process Y- %d\n",i);
            sem_post(sem2);
            sleep(1);
        }
    exit(0);
    }
    else
    {
        if(!fork()){
        for (i = 1; i <= 10; i++)
        {
            sem_wait(sem2);
            printf("Process X- %d\n",i);
            sem_post(sem1);
            sleep(2);
        }
        exit(0);
    }
    wait(NULL);    
    wait(NULL);
    }
    sem_close(sem1);
    sem_unlink("/semaphore1");
    sem_close(sem2);
    sem_unlink("/semaphore2");
    return 0;
}