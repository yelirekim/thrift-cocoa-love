#!/bin/bash
thrift --gen cocoa:validate_required thrift/test/ThriftTest.thrift
thrift --gen cocoa asdf.thrift
