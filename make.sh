#!/bin/sh

while getopts "c:s:" flag
do
    case "${flag}" in
        c) clean=${OPTARG};;
        s) stubs=${OPTARG};;
    esac
done

if [ "$clean" != "" ]; then
    make clean && make && sudo make install
elif [ "$stubs" = "1" ]; then
    echo "Generating stub.."
    php ./stubgen.phar dump aspose_php > ./stubs/all.php
elif [ "$stubs" = "2" ]; then
    echo "Generating stub.."
    php ./stubgen.phar dump-files aspose_php ./stubs
else
    make all && sudo make install
fi

