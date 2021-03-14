#!/bin/sh

while getopts "c:s:p:" flag
do
    case "${flag}" in
        c) clean=${OPTARG};;
        s) stubs=${OPTARG};;
        p) plugin=${OPTARG};;
    esac
done

if [ "$clean" != "" ]; then
    make clean && make && sudo make install
elif [ "$stubs" = "1" ]; then
    echo "Generating stub.."
    php ./vendor/sasezaki/php-extension-stub-generator/php-extension-stub-generator.phar dump aspose_php > ./stubs/all.php
elif [ "$stubs" = "2" ]; then
    echo "Generating stub.."
    php ./vendor/sasezaki/php-extension-stub-generator/php-extension-stub-generator.phar dump-files aspose_php ./stubs
elif [ "$plugin" != "" ]; then
    PLUGIN=plugin/phpstorm-aspose-php-plugin.jar
    echo "Generating PHPStorm plugin.."
    cd plugin
    if test -f "$PLUGIN"; then
        rm ./phpstorm-aspose-php-plugin.jar
    fi
    zip -r phpstorm-aspose-php-plugin.jar *
    cd ../
else
    make all && sudo make install
fi

