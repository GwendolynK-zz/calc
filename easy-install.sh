#!/bin/sh
# Created by: Westley K
# email: westley@sylabs.io
# Date: Sep 4, 2018
# version-1.0.0
# https://github.com/WestleyK/calc
#
# MIT License
#

set -e

SCRIPT_NAME="calc"


URL_SCRIPT=""
MERCH=` uname -m `

if [[ "$OSTYPE" == "linux-gnu"* ]]; then
    if [[ "$MERCH" == *"64" ]]; then
        URL_SCRIPT="na linux64"
    elif [[ "$MERCH" == *"86" ]]; then
        URL_SCRIPT="na linux32"
    elif [[ "$MERCH" == "arm"* ]]; then
        URL_SCRIPT="na linux-arm"
    fi
elif [[ "$OSTYPE" == "darwin"* ]]; then
    URL_SCRIPT="https://github.com/WestleyR/calc/raw/master/osx/calc"
fi

# for debuging
echo $URL_SCRIPT
echo $OSTYPE

wget -O $SCRIPT_NAME $URL_SCRIPT
chmod +x $SCRIPT_NAME

echo 
echo
echo
echo "SUCCESS: install successful."
echo 
echo "########## $SCRIPT_NAME installed to the current directory  ##########"
echo
echo ">> To finish the install, do:"
echo " $ sudo mv $SCRIPT_NAME /usr/local/bin/"
exit 0


#
# End install script
#

