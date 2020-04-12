# Slamtec M1M1 Lidar Mapper Workspace

###Overview
This repository is to intended for use on a dedicated Ubuntu build server. The host Ubuntu server can leverage this repo to cross-compile C++ programs which rely on the Slamtec libraries and can be run on a Raspberry Pi. This repo has only been tested on Ubuntu 16.04 with GCC-4.8, but the Slamtec example build has worked successfully.

---
###Device Details

The default M1M1 Slamtec Lidar IP address is 192.168.11.1 and the default port is 1445.

---
### Getting Started

To get started building C++ programs with these repo, run the following steps to set up your environment.

  1. Pull down and unpack the slamtec official C++ sdk by running ./build_env_setup_scripts/pull_sdk
       This will install the Ubuntu dependencies "build-essential", and the cross-compiler g++-4.8-arm-linux-gnueabihf

  2. Replace CC and CXX on lines 50 and 51 in ./slamware/slamware_sdk_linux-armv7hf-gcc4.8/mak_def.inc from
       CC = gcc
       CXX = g++
     to
       CC = arm-linux-gnueabihf-gcc-4.8
       CXX = arm-linux-gnueabihf-g++-4.8

  3. Make your first example "hello_slamware" with
       cd hello_slamware
       make

  4. Transfer the executable over to your Raspberry Pi, connect the M1M1 Mapper to eth0, and run the executable.
       Executable is generated to ./slamware/slamware_sdk_linux-armv7hf-gcc4.8/linux-armv7hf-release/output/hello_slamware

  When run on the raspberry pi target, hello_slamware should successfully output the following:
    $ ./hello_slamware
    Base version: 2.0.0_dev-sdp-20161008
