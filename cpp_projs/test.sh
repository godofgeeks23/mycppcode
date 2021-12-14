// bash script to print content of all regular files in current directory
for file in *
do
    if [ -f $file ]
    then
        echo $file
    fi
done
