# Code for 6Sens Project : simple "Hello World!" test for my own MAMWLExx (based on STM32WLEx) board

## Overview
This application prints "Hello World" to the console and allows us that the device tree board file is correct. The file is a modified and customized version of the Lora E5 mini board (Seeed Studio).
The version of Zephyr RTOS used is the version v3.6.0.

For Zephyr documentation, please click on this link: https://docs.zephyrproject.org/3.6.0/

**First Board used** :  Cicerone board by Move-X 

**Second Board used** : Original MAMWLExx board, powered by battery/solar panel. (see 6sens_project_stm32wl repository/hardware part, for more information.)

## Building and Running
pyOCD doesn't work at first.

The built-in debug probe works with pyOCD, but requires installing an additional pack to support the STM32WL :

    - pyocd pack --update
    - pyocd pack --install stm32wl

The following commands clean build folder, build and flash the sample:

**Command to use**

west build -p always -b lora_e5_mini applications/stm32wle5_rtos_test

west flash --runner pyocd