# RTL8852AU-Linux-WIFIDriver

![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?v=103)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)
[![GitHub stars](https://img.shields.io/github/stars/chengkunli96/RTL8852AU-Linux-WIFIDriver.svg?style=social)](https://github.com/chengkunli96/RTL8852AU-Linux-WIFIDriver/stargazers)

This repo is the source code of the wifi driver which supports RTL8852AU chipset. And this code has been tested on Ubuntu20.04. And this version has fixed some bugs comparing with other internet versions.

## How to Install
Firsty, you should disable the secure boot. You can use following command to check the status of secure boot. If it is still enable, go to BIOS mode and disable it.
``` bash
mokutil --sb-state
```
The installation script is written for bash. And the default mode of ubuntu terminal is dash. Thus, remember use `bash` and `root`.
``` bash
sudo bash ./install.bash
```