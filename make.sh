#!/bin/sh

while getopts c: flag
do
    case "${flag}" in
        c) clean=${OPTARG};;
    esac
done

if [ "$clean" != "" ]; then
    make clean && make && sudo make install
else
    make all && sudo make install
fi

