inventory: inventory.o readline.o
	gcc inventory.o readline.o -o inventory

inventory.o: inventory.c readline.h
	gcc -c inventory.c

readline.o: readline.c readline.h
	gcc -c readline.c