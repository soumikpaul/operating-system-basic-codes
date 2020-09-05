dir_name = "$1"
find $dir_name -type f -exec chmod u+rwx,g+rwx,o+wx {} \; -type d -exec chmod u+rwx,g+rwx,o+rw {} \;
ls -al | grep "$dir_name"



#-type d -exec chmod u-w,g-w,o-w {} \;
