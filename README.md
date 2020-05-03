# FetchContent example

[![Build Status](https://travis-ci.com/bewagner/fetchContent_example.svg?branch=master)](https://travis-ci.com/bewagner/fetchContent_example)

Demonstration of how to use CMake's `FetchContent` to manage C++ dependencies.

The application builds a sample program that makes use of [doctest](https://github.com/onqtam/doctest) and [range-v3](https://github.com/ericniebler/range-v3).

## Dependencies
Make sure you have [CMake](https://github.com/Kitware/CMake) >= 3.14 installed. 

If you have an older version, you can run `install_cmake.sh` to install the newest version. 
You can also have a look at the `install` step in `.travis.yml` to see how to download a prebuilt version of CMake 3.17.

## Building and running

Run the following
```shell script
mkdir build 
cd build
cmake ..
cmake --build .
./fetchContent_example
```

