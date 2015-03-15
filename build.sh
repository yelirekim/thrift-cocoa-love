#!/bin/bash
thrift --gen cocoa:validate_required ThriftTest.thrift
thrift --gen cocoa asdf.thrift
