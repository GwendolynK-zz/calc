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
    URL_SCRIPT="na osx"
fi

echo $URL_SCRIPT
echo $OSTYPE

exit 0







#
# End easy-install.sh
#
