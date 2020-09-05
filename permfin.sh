if ["$#" - eq 0]; then
    echo "Usage ./q2.sh (name of dir)"
fi
dir_name=$1
chmod 444 $dir_name
echo "only read perm"
echo "check"
ls -al | grep "$dir_name"

