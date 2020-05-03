#! /usr/bin/env bash

set -e

# Install libssl package, because CMake will need it. Also make sure we have make and gcc.
sudo apt-get -y install libssl-dev build-essential

# Download source code
git clone https://github.com/Kitware/CMake.git
cd CMake

# Configure and make
./bootstrap
make -j "$(nproc)" -l "$(nproc)"

# Install cmake
sudo make install
