#! /usr/bin/env bash

set -e

# Install libssl package, because CMake will need it
sudo apt install -y libssl-dev

# Download source code
git clone https://github.com/Kitware/CMake.git
cd CMake

# Configure and make
./bootstrap
make -j "$(nproc)" -l "$(nproc)"

# Install cmake
sudo make install
