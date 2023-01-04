# License: BSD-3-Clause license
# Author: Piotr Marendowski
# Purpose: Makefile for programs made by K.N. King
# Dependencies: stackADT-v1.h, stackADT-v1.c, stackclient.c
# Modification date (DD/MM/YYYY): 17.12.2022

stackclient: stackADT-v1.o stackclient.o
	gcc stackADT-v1.o stackclient.o -o stackclient

stackADT-v1.o: stackADT-v1.c stackADT-v1.h
	gcc -c stackADT-v1.c

stackclient.o: stackclient.c stackADT-v1.h
	gcc -c stackclient.c