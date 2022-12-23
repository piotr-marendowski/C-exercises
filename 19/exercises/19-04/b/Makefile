# License: BSD-3-Clause license
# Author: Piotr Marendowski
# Purpose: Makefile for exercise 4a
# Dependencies: stackADT-v1.h, stackADT-v3.c, stackclient.c
# Modification date (DD/MM/YYYY): 19.12.2022

stackclient: stackADT-v3.o stackclient.o
	gcc stackADT-v3.o stackclient.o -o stackclient

stackADT-v3.o: stackADT-v3.c stackADT-v2.h
	gcc -c stackADT-v3.c

stackclient.o: stackclient.c stackADT-v2.h
	gcc -c stackclient.c