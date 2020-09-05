#include <stdio.h>
#include <string.h>

int main ()
{
   char command[50];
   system("echo 'this is printed using echo'");
   system("pwd");
   printf("Enter dir name");
   char a[50];
   scanf("%s",a);
   system("cd $a");
   //system("pwd");
   strcpy( command, "ls" );
   system(command);
   system("cp per.sh /home/soumik/mystuff");

   return(0);
} 
