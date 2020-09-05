#2. Write a shell script that 
#a) allows everyone to read files in CSE-xx. No other privileges are to be changed.
#b) allows the owner and group members to list, remove or add files in CSE-xx. All privileges are to be removed from all others.
#c) allows the owner and group members to execute CSE-xx. Only the owner will have read and write permission.

echo "Three permission options are available."
echo "a) Allows everyone to read files in CSE-xx. No other privileges are to be changed."
echo "b) Allows the owner and group members to list, remove or add files in CSE-xx. All privileges are to be removed from all others."
echo "c) Allows the owner and group members to execute CSE-xx. Only the owner will have read and write permission."
echo "Enter your choice (a/b/c): "
read text
if [ "$text" == "a" ];
  then
  	chmod 444 /home/mystuff/shell/Soumik
elif [ "$text" == "b" ];
  then
	chmod 660 ../Soumik
else
	chmod 710 ../Soumik
fi
echo "Permissions set."
