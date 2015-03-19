#!/bin/bash

out_dir="gen-cocoa/"
orig_dir=$out_dir"orig/"
nc_dir=$out_dir"no_clients/"
diff_dir=$out_dir"diff/"

function gen_src() {
    ./thrift/compiler/cpp/thrift \
        -out $out_dir \
        --gen cocoa:validate_required,async_clients \
        $1
    ./thrift/compiler/cpp/thrift \
        -out $nc_dir \
        --gen cocoa:validate_required \
        $1
    thrift \
        -out $orig_dir \
        --gen cocoa:validate_required \
        $1
}

gen_src thrift/test/ThriftTest.thrift
gen_src asdf.thrift

function gen_diff () {
    git diff --no-index $orig_dir$1 $out_dir$1 > $diff_dir$1.diff
    git diff --no-index $out_dir$1 $nc_dir$1 > $diff_dir$1.no_clients.diff
    git diff --no-index $orig_dir$1 $nc_dir$1 > $diff_dir$1.orig.no_clients.diff
}

gen_diff asdf.h
gen_diff asdf.m
gen_diff ThriftTest.h
gen_diff ThriftTest.m
