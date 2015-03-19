#!/bin/bash

display_usage() { 
    echo -e "Run either '$0 --configure' or '$0 --compile'"
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

if [ $1 == "--compile" ];
then
    make -j 5
fi

popd
