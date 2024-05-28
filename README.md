# CH32V003 USB C Breakout

## Project Description
A Breakout Board for the QFN Variant of the CH32V003.  
The board includes a RST Button, USB, SPI, I2C, UART and SWIO pins - converts
the USB 5V in to 3.3V.  

This Board has been designed with common and minimalistic parts to make the
production and assembly of these boards easy and cheap

NOTE: If using the USB Pins for other purposes, please keep in mind that USB_DM
and USB_PU are connected togehter with a 1.5K resistor. Remove this if needed

## Parts List


## Pinout
**USB**
   * Pullup  PD2
   * D-      PD3
   * D+      PD4

**SPI**
   * SCLK    PC5
   * MOSI    PC6
   * MISO    PC7

**I2C**
   * SDA     PC1
   * SCL     PC2

**UART**
   * TX      PD5
   * RX      PD6

## TODO

----
ADBeta (c) 2024
