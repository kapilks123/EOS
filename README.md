
# EMBEDDED OPERATING SYSTEM


# Tools

- Typora
- Draw IO
- Shutter

# DAY2 (TOPICS)
-Embedded Systems vs General Purpose Systems

  -Two and three layer Embedded Systems

-Modularize project and code
  -Build project

-Makefile
-Hex dump vs Execution us Embedded linux

-Elf format

-parallelism
  -pseudo parallelism
  -true parallelism

-uniprocessor
-multiprocessor

-objdump -S
- Machine code
- .text section

- Cross-compiler
- arm-linux-gnueabi-

# Filesystem
  
  -Root FS
  -Directory structure

-Shell
  -Environment variables
  -PATH, USER
  -Custom Environment Variables

-Section
  - .text=>PC/IP
  - .data=> global init
  - .bss => global unitialized
  - heap => malloc
  - stack => return addr, local variables
  
-size

## C

- Header (importance header files)
- Library
- Declaration => Function prototype
- Defination

## Library

- Static (.a) => ar
- Dynamic (.so) => gcc -shared -fPIC
- Using the library => -lname -Lpath

## System call vs Library Calls


## PID and PPID

  - getpid()
  - getppid()



## COncepts

- Address Space
- User Space
- Kernel Space

- Segmentation Fault

- PCB - DATA structure to hold the information about the process

- Library call vs System call

- open, read, write close
## Fork

## Pipes

## FIFOs
 
## Process state
1. Create
2. Ready
3. Running
4. Waiting
5. Exit

## Synchronazation
