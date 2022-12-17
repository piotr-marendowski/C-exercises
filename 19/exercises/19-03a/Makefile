# License: BSD-3-Clause license
# Author: Piotr Marendowski
# Purpose: Makefile for exercise 3a
# Dependencies: 19-01.h, 19-03a.c, 19-03-client.c
# Modification date (DD/MM/YYYY): 17.12.2022

19-03-client: 19-03a.o 19-03-client.o
	gcc 19-03a.o 19-03-client.o -o 19-03-client

19-03a.o: 19-03a.c 19-01.h
	gcc -c 19-03a.c

19-03-client.o: 19-03-client.c 19-01.h
	gcc -c 19-03-client.c