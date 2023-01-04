# License: BSD-3-Clause license
# Author: Piotr Marendowski
# Purpose: Makefile for programs made by K.N. King
# Dependencies: stackADT-v1.h, stackADT-v1.c, stackclient.c
# Modification date (DD/MM/YYYY): 17.12.2022

# USE: make -f Makefile-knking

stackclient: stackADT-v2.o stackclient.o
	gcc stackADT-v2.o stackclient.o -o stackclient

stackADT-v2.o: stackADT-v2.c stackADT-v2.h
	gcc -c stackADT-v2.c

stackclient.o: stackclient.c stackADT-v2.h
	gcc -c stackclient.c