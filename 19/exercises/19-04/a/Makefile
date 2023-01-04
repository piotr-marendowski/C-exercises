# License: BSD-3-Clause license
# Author: Piotr Marendowski
# Purpose: Makefile for exercise 4a
# Dependencies: stackADT-v1.h, 19-04a.c, stackclient.c
# Modification date (DD/MM/YYYY): 19.12.2022

stackclient: 19-04a.o stackclient.o
	gcc 19-04a.o stackclient.o -o stackclient

19-04a.o: 19-04a.c stackADT-v1.h
	gcc -c 19-04a.c

stackclient.o: stackclient.c stackADT-v1.h
	gcc -c stackclient.c