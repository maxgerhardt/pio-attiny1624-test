# PlatformIO ATTiny1624 Test

## Description

This is a minimal project which adds support for the ATTiny1624 in MegaTiny core through a custom board definition file 
and updated core & toolchain packages.

## Notes

The toolchain link in the `platformio.ini` is Windows-specific. See the alternative Linux link if you are on Linux instead 
of Windows. 

## Expected output

```
Processing attiny1624 (platform: atmelmegaavr; board: attiny1624; framework: arduino)
----------------------------------------------------------------------------------------------------------------------------------
Verbose mode can be enabled via `-v, --verbose` option
CONFIGURATION: https://docs.platformio.org/page/boards/atmelmegaavr/attiny1624.html
PLATFORM: Atmel megaAVR (1.5.0) > ATtiny1624
HARDWARE: ATTINY1624 20MHz, 2KB RAM, 16KB Flash
PACKAGES:
 - framework-arduino-megaavr-megatinycore 2.5.6+sha.4d045e7
 - toolchain-atmelavr 1.70300.200526 (7.3.0)
LDF: Library Dependency Finder -> https://bit.ly/configure-pio-ldf
LDF Modes: Finder ~ chain, Compatibility ~ soft
Found 15 compatible libraries
Scanning dependencies...
No dependencies
Building in release mode
Compiling .pio\build\attiny1624\src\main.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\Tone.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\UART.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\UART0.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\UART1.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\WInterrupts.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\WInterrupts_PA.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\WInterrupts_PB.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\WInterrupts_PC.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\WMath.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\abi.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\api\Common.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\api\IPAddress.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\api\PluggableUSB.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\api\Print.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\api\RingBuffer.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\api\Stream.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\api\String.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\hooks.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\main.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\new.cpp.o
Compiling .pio\build\attiny1624\FrameworkArduino\wiring.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\wiring_analog.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\wiring_digital.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\wiring_pulse.S.o
Compiling .pio\build\attiny1624\FrameworkArduino\wiring_pulse.c.o
Compiling .pio\build\attiny1624\FrameworkArduino\wiring_shift.c.o
Archiving .pio\build\attiny1624\libFrameworkArduino.a
Indexing .pio\build\attiny1624\libFrameworkArduino.a
Linking .pio\build\attiny1624\firmware.elf
Checking size .pio\build\attiny1624\firmware.elf
Advanced Memory Usage is available via "PlatformIO Home > Project Inspect"
RAM:   [=         ]  14.7% (used 302 bytes from 2048 bytes)
Flash: [=         ]  13.7% (used 2241 bytes from 16384 bytes)
Building .pio\build\attiny1624\firmware.hex
==================== [SUCCESS] Took 2.23 seconds ====================
```
