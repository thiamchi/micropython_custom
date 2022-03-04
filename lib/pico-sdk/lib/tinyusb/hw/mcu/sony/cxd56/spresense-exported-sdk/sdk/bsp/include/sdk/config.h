/* This header generated by tools/mkconfig.py. Do not edit. */

#include <nuttx/config.h>

#ifndef __BSP_INCLUDE_SDK_CONFIG_H
#define __BSP_INCLUDE_SDK_CONFIG_H

#define CONFIG_SDK_USER_ENTRYPOINT spresense_main
#define CONFIG_BOARD_SPRESENSE 1
#define CONFIG_BOARD_NAME "spresense"
#define CONFIG_BOARD_CUSTOM_PINCONFIG 1
#define CONFIG_BOARD_USB_DISABLE_IN_DEEP_SLEEPING 1
#define CONFIG_SDCARD_TXS02612 1
#define CONFIG_SDCARD_TXS02612_PORT0 1
#define CONFIG_CXD56_FCBGA 1
#define CONFIG_CXD56_MAINCORE 1
#define CONFIG_CXD56_XOSC_CLOCK 26000000
#define CONFIG_CXD56_PMIC 1
#define CONFIG_CXD56_CPUFIFO 1
#define CONFIG_CXD56_ICC 1
#define CONFIG_CXD56_CPUFIFO_ENTRIES 8
#define CONFIG_CXD56_CPUFIFO_NBUFFERS 8
#define CONFIG_CXD56_FARAPI 1
#define CONFIG_CXD56_FARAPI_VERSION_CHECK 1
#define CONFIG_CXD56_RTC 1
#define CONFIG_CXD56_RTC_LATEINIT 1
#define CONFIG_CXD56_TIMER 1
#define CONFIG_CXD56_TIMER_DIVIDER_1 1
#define CONFIG_CXD56_WDT 1
#define CONFIG_CXD56_WDT_INTERRUPT 1
#define CONFIG_CXD56_SDIO 1
#define CONFIG_CXD56_SDIO_DMA 1
#define CONFIG_CXD56_SDIO_DISABLE_CD_WP 1
#define CONFIG_CXD56_EMMC 1
#define CONFIG_CXD56_GPIO_IRQ 1
#define CONFIG_CXD56_DMAC 1
#define CONFIG_CXD56_UART 1
#define CONFIG_CXD56_UART1 1
#define CONFIG_CXD56_UART2 1
#define CONFIG_CXD56_UART2_BASE_CLOCK_DIVIDER 4
#define CONFIG_CXD56_SPI 1
#define CONFIG_CXD56_SPI3 1
#define CONFIG_CXD56_SPI3_CS0 1
#define CONFIG_CXD56_SPI4 1
#define CONFIG_CXD56_SPI5 1
#define CONFIG_CXD56_SPI5_PINMAP_EMMC 1
#define CONFIG_CXD56_I2C 1
#define CONFIG_CXD56_I2C0 1
#define CONFIG_CXD56_I2C2 1
#define CONFIG_CXD56_PWM 1
#define CONFIG_CXD56_PWM0 1
#define CONFIG_CXD56_PWM1 1
#define CONFIG_CXD56_PWM2 1
#define CONFIG_CXD56_PWM3 1
#define CONFIG_CXD56_ADC 1
#define CONFIG_CXD56_HPADC0 1
#define CONFIG_CXD56_HPADC0_FREQ 7
#define CONFIG_CXD56_HPADC0_OFFSET 0
#define CONFIG_CXD56_HPADC0_GAIN 0
#define CONFIG_CXD56_HPADC0_FSIZE 64
#define CONFIG_CXD56_HPADC1 1
#define CONFIG_CXD56_HPADC1_FREQ 7
#define CONFIG_CXD56_HPADC1_OFFSET 0
#define CONFIG_CXD56_HPADC1_GAIN 0
#define CONFIG_CXD56_HPADC1_FSIZE 64
#define CONFIG_CXD56_LPADC 1
#define CONFIG_CXD56_LPADC_ALL 1
#define CONFIG_CXD56_LPADC0_FREQ 7
#define CONFIG_CXD56_LPADC0_OFFSET 0
#define CONFIG_CXD56_LPADC0_GAIN 0
#define CONFIG_CXD56_LPADC0_FSIZE 64
#define CONFIG_CXD56_LPADC1_FREQ 7
#define CONFIG_CXD56_LPADC1_OFFSET 0
#define CONFIG_CXD56_LPADC1_GAIN 0
#define CONFIG_CXD56_LPADC1_FSIZE 64
#define CONFIG_CXD56_LPADC2_FREQ 7
#define CONFIG_CXD56_LPADC2_OFFSET 0
#define CONFIG_CXD56_LPADC2_GAIN 0
#define CONFIG_CXD56_LPADC2_FSIZE 64
#define CONFIG_CXD56_LPADC3_FREQ 7
#define CONFIG_CXD56_LPADC3_OFFSET 0
#define CONFIG_CXD56_LPADC3_GAIN 0
#define CONFIG_CXD56_LPADC3_FSIZE 64
#define CONFIG_CXD56_SCU 1
#define CONFIG_CXD56_SCU_PREDIV 64
#define CONFIG_CXD56_SCU_RCOSC 1
#define CONFIG_CXD56_SCU32K_RTC 1
#define CONFIG_CXD56_UDMAC 1
#define CONFIG_CXD56_CISIF 1
#define CONFIG_CXD56_PM 1
#define CONFIG_CXD56_GAUGE 1
#define CONFIG_CXD56_CHARGER 1
#define CONFIG_CXD56_CHARGER_TEMP_PRECISE 1
#define CONFIG_CXD56_GE2D 1
#define CONFIG_CXD56_BACKUPLOG 1
#define CONFIG_LIBM_NEWLIB 1
#define CONFIG_VIDEO_ISX012 1
#define CONFIG_CXD56_GNSS 1
#define CONFIG_CXD56_GNSS_NPOLLWAITERS 4
#define CONFIG_CXD56_GNSS_NSIGNALRECEIVERS 4
#define CONFIG_CXD56_GNSS_WORKER_STACKSIZE 128
#define CONFIG_CXD56_GNSS_WORKER_THREAD_PRIORITY 255
#define CONFIG_CXD56_GNSS_BACKUP_FILENAME "/mnt/spif/gnss_backup.bin"
#define CONFIG_CXD56_GNSS_CEP_FILENAME "/mnt/sd0/gnss_cep.bin"
#define CONFIG_CXD56_GEOFENCE 1
#define CONFIG_GPSUTILS_CXD56NMEA_LIB 1
#define CONFIG_VIDEO 1
#define CONFIG_DNN_RT 1
#define CONFIG_IMAGEPROC 1
#define CONFIG_EXAMPLES_NSH 1
#define CONFIG_EXAMPLES_NSH_CXXINITIALIZE 1
#define CONFIG_NSH_LIBRARY 1
#define CONFIG_NSH_READLINE 1
#define CONFIG_NSH_LINELEN 80
#define CONFIG_NSH_CMDPARMS 1
#define CONFIG_NSH_MAXARGUMENTS 6
#define CONFIG_NSH_ARGCAT 1
#define CONFIG_NSH_NESTDEPTH 3
#define CONFIG_NSH_DISABLE_GET 1
#define CONFIG_NSH_DISABLE_IFCONFIG 1
#define CONFIG_NSH_DISABLE_IFUPDOWN 1
#define CONFIG_NSH_DISABLE_LOSMART 1
#define CONFIG_NSH_DISABLE_PUT 1
#define CONFIG_NSH_DISABLE_TELNETD 1
#define CONFIG_NSH_DISABLE_WGET 1
#define CONFIG_NSH_MMCSDMINOR 0
#define CONFIG_NSH_CMDOPT_DF_H 1
#define CONFIG_NSH_CODECS_BUFSIZE 128
#define CONFIG_NSH_CMDOPT_HEXDUMP 1
#define CONFIG_NSH_FILEIOSIZE 1024
#define CONFIG_NSH_CONSOLE 1
#define CONFIG_NSH_ARCHINIT 1
#define CONFIG_HAVE_CXXINITIALIZE 1
#define CONFIG_READLINE_HAVE_EXTMATCH 1
#define CONFIG_SYSTEM_READLINE 1
#define CONFIG_READLINE_ECHO 1
#define CONFIG_READLINE_TABCOMPLETION 1
#define CONFIG_READLINE_MAX_EXTCMDS 64
#define CONFIG_READLINE_CMD_HISTORY 1
#define CONFIG_READLINE_CMD_HISTORY_LINELEN 80
#define CONFIG_READLINE_CMD_HISTORY_LEN 16
#define CONFIG_EXTERNALS_CMSIS 1
#define CONFIG_EXTERNALS_CMSIS_DSP 1
#define CONFIG_EXTERNALS_CMSIS_NN 1

#endif /* __BSP_INCLUDE_SDK_CONFIG_H */