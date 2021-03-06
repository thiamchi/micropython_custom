# Welcome to BTstack

BTstack is [BlueKitchen's](https://bluekitchen-gmbh.com) implementation of the official Bluetooth stack.
It is well suited for small, resource-constraint devices
such as 8 or 16 bit embedded systems as it is highly configurable and comes with an ultra small memory footprint.

Targeting a variety of platforms is as simple as providing the necessary UART, CPU, and CLOCK implementations. BTstack is currently capable of connecting to Bluetooth-modules via: (H2) HCI USB, (H4) HCI UART + TI's eHCILL, and (H5) HCI Three-Wire UART.

On smaller embedded systems, a minimal run loop implementation allows to use BTstack without a Real Time OS (RTOS).
If a RTOS is already provided, BTstack can be integrated and run as a single thread.

On larger systems, BTstack provides a server that connects to a Bluetooth module.
Multiple applications can communicate with this server over different inter-process communication methods. As sockets are used for client/server communication, it's easy to interact via higher-level level languages, e.g. there's already a Java binding for use in desktop environments.

BTstack supports the Central and the Peripheral Role of Bluetooth 5 Low Energy specification incl. LE Secure Connections, LE Data Channels, and LE Data Length Extension. It can be configured to run as either single-mode stack or a dual-mode stack.

BTstack is free for non-commercial use. However, for commercial use, <a href="mailto:contact@bluekitchen-gmbh.com">tell us</a> a bit about your project to get a quote.

**Documentation:** [HTML](https://bluekitchen-gmbh.com/btstack/develop/), [PDF](https://bluekitchen-gmbh.com/btstack_develop.pdf)

**Third-party libraries (FOSS):** [List of used libraries and their licenses](https://github.com/bluekitchen/btstack/blob/develop/3rd-party/README.md)

**Discussion and Community Support:** [BTstack Google Group](https://groups.google.com/group/btstack-dev)


### Supported Protocols and Profiles

**Protocols:** L2CAP (incl. LE Data Channels), RFCOMM, SDP, BNEP, AVDTP, AVCTP, ATT, SM (incl. LE Secure Connections).

**Profiles:** GAP, IOP, HFP, HSP, SPP, PAN, A2DP, AVRCP incl. Browsing, GATT.

**GATT Services:** Battery, Cycling Power, Cycling Speed and Cadence, Device Information, Heart Rate, HID over GATT (HOG), Mesh Provisioning, Mesh Proxy, Nordic SPP, u-Blox SPP. 

GATT Services are in general easy to implement and require short development time. For more GATT Services please contact us, or follow the [implementation guidelines](http://bluekitchen-gmbh.com/btstack/profiles/#gatt-generic-attribute-profile).  

**Beta Stage:** HID, HOGP, PBAP.

**In Development:** BLE Mesh and more.

It has been qualified with the Bluetooth SIG (QDID 110883) for GAP 1.1, IOP, HFP 1.7, HSP 1.2, SPP 1.2, PAN 1.0, A2DP 1.3, AVRCP 1.6 profiles and
GATT, SM of the Bluetooth Core 5.0 specification. For information on MFi/iAP2 support, please <a href="mailto:contact@bluekitchen-gmbh.com">contact us</a>.

## Evaluation Platforms

#### Embedded Platforms:      
Build Status               | Port | Platform
---------------------| -----| ------
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-esp32-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-esp32-develop) | [esp32](https://github.com/bluekitchen/btstack/tree/develop/port/esp32) | [Espressif ESP32](http://www.espressif.com/products/hardware/esp32/overview) 2.4 GHz Wi-Fi and Bluetooth Dual-Mode combo chip using [FreeRTOS](https://www.freertos.org)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-ez430-rf2560-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-ez430-rf2560-develop) | [ez430-rf2560](https://github.com/bluekitchen/btstack/tree/develop/port/ez430-rf2560) | [EZ430-RF256x Bluetooth Evaluation Tool for MSP430](http://www.ti.com/tool/ez430-rf256x)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-msp-exp430f5438-cc2564b-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-msp-exp430f5438-cc2564b-develop) | [msp-exp430f5438-cc2564b](https://github.com/bluekitchen/btstack/tree/develop/port/msp-exp430f5438-cc2564b) |[MSP430F5438 Experimenter Board for MSP430](http://www.ti.com/tool/msp-exp430f5438) with [Bluetooth CC2564 Module Evaluation Board](http://www.ti.com/tool/cc2564modnem)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-msp430f5229lp-cc2564b-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-msp430f5229lp-cc2564b-develop)     | [msp430f5529lp-cc2564b](https://github.com/bluekitchen/btstack/tree/develop/port/msp430f5229lp-cc2564b) | [MSP-EXP430F5529LP LaunchPad](http://www.ti.com/ww/en/launchpad/launchpads-msp430-msp-exp430f5529lp.html#tabs) with [Bluetooth CC2564 Module Evaluation Board](http://www.ti.com/tool/cc2564modnem) and [EM Adapter BoosterPack](http://www.ti.com/tool/boost-ccemadapter) with additional 32768Hz quartz oscillator
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-max32630-fthr-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-max32630-fthr) | [max32630-fthr](https://github.com/bluekitchen/btstack/tree/develop/port/max32630-fthr) | [MAX32630FTHR ARM Cortex M4F Board](https://www.maximintegrated.com/en/products/digital/microcontrollers/MAX32630FTHR.html) with onboard [Panasonic PAN1326 module](https://na.industrial.panasonic.com/products/wireless-connectivity/bluetooth/multi-mode/series/pan13261316-series/CS467) containing  [TI CC2564B Bluetooth controller](http://www.ti.com/product/cc2564)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-samv71-xplained-atwilc3000-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-samv71-xplained-atwilc3000-develop) | [samv71-xplained-atwilc3000](https://github.com/bluekitchen/btstack/tree/develop/port/samv71-xplained-atwilc3000) | [SAMV71 Ultra Xplained Ultra](http://www.atmel.com/tools/atsamv71-xult.aspx) evaluation kit with [ATWILC3000 SHIELD](http://www.microchip.com/DevelopmentTools/ProductDetails.aspx?PartNO=ATWILC3000-SHLD)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-stm32-f103rb-nucleo-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-stm32-f103rb-nucleo-develop)       | [stm32-f103rb-nucleo](https://github.com/bluekitchen/btstack/tree/develop/port/stm32-f103rb-nucleo) | [STM32 Nucleo development board NUCLEO-F103RB](http://www.st.com/web/catalog/tools/FM116/SC959/SS1532/LN1847/PF259875) with [Bluetooth CC2564 Module Evaluation Board](http://www.ti.com/tool/cc2564modnem) and [EM Adapter BoosterPack](http://www.ti.com/tool/boost-ccemadapter) with additional 32768Hz quartz oscillator
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-stm32-f4discovery-cc256x-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-stm32-f4discovery-cc256x-develop) | [stm32-f4discovery-cc2564b](https://github.com/bluekitchen/btstack/tree/develop/port/stm32-f4discovery-cc256x) | [STM32 F4 Discovery Board](http://www.st.com/en/evaluation-tools/stm32f4discovery.html) with [CC256xEM Bluetooth Adapter Kit for ST](https://store.ti.com/CC256XEM-STADAPT-CC256xEM-Bluetooth-Adapter-Kit-P45158.aspx) and [CC2564B Dual-mode Bluetooth?? Controller Evaluation Module](https://store.ti.com/cc2564modnem.aspx)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-stm32-l073rz-nucleo-em9304-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-stm32-l073rz-nucleo-em9304)  | [stm32-l073rz-nucleo-em9304](https://github.com/bluekitchen/btstack/tree/develop/port/stm32-l073rz-nucleo-em9304) | EM9304 DVK: [STM32 Nucleo development board NUCELO-L73RZ](https://www.st.com/en/evaluation-tools/nucleo-l073rz.html) with [EM9304  Bluetooth Controller](http://www.emmicroelectronic.com/products/wireless-rf/standard-protocols/em9304)
No build server | [stm32-wb55xx-nucleo-freertos](https://github.com/bluekitchen/btstack/tree/develop/port/stm32-wb55xx-nucleo-freertos) | [P-NUCLEO-WB55 kit](https://www.st.com/en/evaluation-tools/p-nucleo-wb55.html)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-pic32-harmony-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-pic32-harmony-develop)                |  [pic32-harmony](https://github.com/bluekitchen/btstack/tree/develop/port/pic32-harmony)  | [Microchip's PIC32 Bluetooth Audio Development Kit](http://www.microchip.com/Developmenttools/ProductDetails.aspx?PartNO=DV320032)
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-wiced-h4-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-wiced-h4-develop)                           | [wiced-h4](https://github.com/bluekitchen/btstack/tree/develop/port/wiced-h4) | Broadcom/Cypress platforms that support the WICED SDK via H4 UART, e.g. [RedBear Duo](https://redbear.cc/product/wifi-ble/redbear-duo.html) (BCM43438 A1), [Inventek Systems ISM4334x](https://www.inventeksys.com/wifi/wifi-modules/ism4343-wmb-l151/) (BCM43438 A1), [Inventek Systems ISM4343](https://www.inventeksys.com/products-page/wifi-modules/serial-wifi/ism43341-m4g-l44-cu-embedded-serial-to-wifi-ble-nfc-module/) (BCM43340)
No build server | [wiced-h5](https://github.com/bluekitchen/btstack/tree/develop/port/wiced-h5) | Broadcom platforms that support the WICED SDK via H5 UART, see wiced-h4

#### Other Platforms:     
Status             | Port  | Platform
-------------------| ------|---------
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-libusb-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-libusb-develop) | [libusb](https://github.com/bluekitchen/btstack/tree/develop/port/libusb) | Unix-based system with dedicated USB Bluetooth dongle
No build server | [libusb-intel](https://github.com/bluekitchen/btstack/tree/develop/port/libusb-intel) | Unix-based system with Intel Wireless 8260/8265 Controller
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-posix-h4-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-posix-h4-develop) | [posix-h4](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4) | Unix-based system connected to Bluetooth module via H4 over serial port   
No build server | [posix-h4-da14581](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4-da14581) | Unix-based system connected to Dialog Semiconductor DA14581 via H4 over serial port
No build server | [posix-h4-da14585](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h4-da14585) | Unix-based system connected to Dialog Semiconductor DA14585 via H4 over serial port   
No build server | [posix-h5](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h5) | Unix-based system connected to Bluetooth module via H5 over serial port   
No build server | [posix-h5-bcm](https://github.com/bluekitchen/btstack/tree/develop/port/posix-h5) | Unix-based system connected to Broadcom/Cypress Bluetooth module via H5 over serial port
No build server | [qt-h4](https://github.com/bluekitchen/btstack/tree/develop/port/qt-h4) | Unix- or Win32-based [Qt application](https://qt.io) connected to Bluetooth module via H4 over serial port 
No build server | [qt-usb](https://github.com/bluekitchen/btstack/tree/develop/port/qt-usb) | Unix- or Win32-based [Qt application](https://qt.io) with dedicated USB Bluetooth dongle
No build server | [windows-h4](https://github.com/bluekitchen/btstack/tree/develop/port/windows-h4) | Win32-based system connected to Bluetooth module via serial port   
No build server | [windows-winusb](https://github.com/bluekitchen/btstack/tree/develop/port/windows-winusb) | Win32-based system with dedicated USB Bluetooth dongle
No build server | [windows-winusb-intel](https://github.com/bluekitchen/btstack/tree/develop/port/windows-winusb-intel) | Win32-based system with Intel Wireless 8260/8265 Controller
No build server | [raspi](https://github.com/bluekitchen/btstack/tree/develop/port/raspi) | Raspberry Pi 3 or Raspberry Pi Zero W with built-in BCM4343 Bluetooth/Wifi Controller
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-daemon-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-daemon-develop)     | [daemon](https://github.com/bluekitchen/btstack/tree/develop/port/daemon) | TCP and Unix domain named socket client-server architecture supporting multiple clients
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/java-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/java-develop)                   | [java](https://github.com/bluekitchen/btstack/tree/develop/platform/daemon/binding/java) | Java wrapper for daemon
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-mtk-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-mtk-develop)           | [mtk](https://github.com/bluekitchen/btstack/tree/develop/port/mtk) | daemon for rooted Android devices, based on Mediatek MT65xx processor, Java and C client-server API
[<img src="https://buildbot.bluekitchen-gmbh.com/btstack/badges/port-ios-develop.svg">](https://buildbot.bluekitchen-gmbh.com/btstack/#/builders/port-ios-develop)           | [ios](https://github.com/bluekitchen/btstack/tree/develop/port/ios) | daemon for iOS jailbreak devices, C client-server API
No build server | [freertos](https://github.com/bluekitchen/btstack/tree/develop/platform/freertos) | [FreeRTOS](https://www.freertos.org): Run BTstack on a dedicated thread, not thread-safe.

## Supported Chipsets

Chipset                      | Type      | HCI Transport   | SCO over HCI     | BTstack folder | Comment
---------------------------- |-----------| ----------------|------------------|----------------|---------
Atmel ATWILC3000             | LE        | H4              | n.a.             | atwilc3000     | Firmware size: 60 kB
Broadcom UART                | Dual mode | H4, H5          | Probably         | bcm            | Max UART baudrate 2 mbps
Broadcom USB Dongles         | Dual mode | USB             | Yes              | bcm            |
CSR UART                     | Dual mode | H4, H5, BCSP    | No (didn't work) | csr            |
CSR USB Dongles              | Dual mode | USB             | Yes              | csr            |
Cypress CYW20704             | Dual mode | H4, H5, USB     | Probably         | bcm            |
Cypress CYW20819             | Dual mode | H4, H5, USB     | Probably         | bcm            | Keep CTS high during power cycle
Cypress PSoC 4               | LE        | H4              | n.a.             |                | HCI Firmware part of PSoC Creator kit examples
Dialog Semiconductor DA14581, DA14585 | LE      | H4, SPI  | n.a.             | da14581        | Official HCI firmware used
Dialog Semiconductor DA1469x | LE        | H4, SPI         | n.a              |                | HCI Firmware part of DA1469x SDK
Espressif ESP32              | Dual mode | VHCI            | Not yet          |                | SoC with Bluetooth and Wifi
EM 9301, 9304                | LE        | SPI             | n.a.             | em9301         | Custom HCI SPI implementation
Intel Dual Wireless 8260, 8265 | Dual mode | USB           | Probably         | intel          | Firmware size: 400 kB 
Nordic nRF                   | LE        | H4              | n.a.             |                | Requires custom HCI firmware
STM STLC2500D                | Classic   | H4              | No (didn't try)  | stlc2500d      | Custom deep sleep management not supported
STM32-WB5x                   | LE        | VHCI            | n.a.             |                | SoC with multi-protocol Radio co-processor
Toshiba TC35661              | Dual mode | H4              | No               | tc3566         |
TI CC256x, WL183x            | Dual mode | H4, H5, eHCILL  | Yes              | cc256x         | Also WL185x, WL187x, and WL189x

[More infos on supported chipsets](https://bluekitchen-gmbh.com/btstack/develop/chipsets/)

## Source Tree Overview
Path				| Description
--------------------|---------------
chipset             | Support for individual Bluetooth chipsets
doc                 | Sources for BTstack documentation
example             | Example applications available for all ports
platform            | Support for special OSs and/or MCU architectures
port                | Complete port for a MCU + Chipset combinations
src                 | Bluetooth stack implementation
test                | Unit and PTS tests
tool                | Helper tools for BTstack
