#!/bin/bash

display_usage() { 
    echo -e "This script was intended to be run in order to install the version of thrift used "
    echo -e "when generating the code used in this repository. IT WILL RUN SUDO MAKE INSTALL.\n"
    echo -e "If you're sure you want to do this, run '$0 --configure' in order to configure the "
    echo -e "build and then '$0 --install' in order to install it.\n"
}

if [  $# -le 0 ] 
then 
    display_usage
    exit 1
fi

pushd thrift

if [ $1 == "--configure" ];
then
    ./bootstrap.sh
    ./configure \
        --without-c_glib \
        --without-csharp \
        --without-python \
        --without-perl \
        --without-haskell \
        --without-d \
        --without-erlang \
        --without-cpp
fi

if [ $1 == "--install" ];
then
    make
    sudo make install
fi

popd
