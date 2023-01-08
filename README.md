# C-exercises
My C programs, exercises, and projects from K.N. King's "C Programming: A Modern Approach 2nd Edition".

## Table of contents
* [Notice](#notice)
* [Chapters](#chapters)
* [Compile and run](#compile-and-run)
* [Makefile for more than one source file](#Makefile-for-more-than-one-source-file)
* [More solutions](#more-solutions)
* [Licence nad copyright](#licence-nad-copyright)

## Notice
Some programs are not written by me, and authors are stated there.

To any fellow eager young mind:
I highly recommend that you create the same repository on your own, it will help you understand topics described in the book. Feel free to use them and compare to yours. This repository is made by me, while learning how these things work. There are some mistakes, and it's not highly efficient or clean code, but its sole purpose is to learn by doing.

## Chapters
02 - C Fundamentals

03 - Formatted Input/Output

04 - Expressions

05 - Selection Statements

06 - Loops

07 - Basic Types

08 - Arrays

09 - Functions

10 - Program Organization

11 - Pointers

12 - Pointers and Arrays

13 - Strings

14 - The preprocessor

15 - Writing Large Programs

16 - Structures, Unions, and Enumerations

17 - Advanced Uses of Pointers

18 - Declarations

19 - Program Design

20 - Low-Level Programming

21 - The Standard Library

22 - Input/Output

## Compile and run

### Compile

C standards:
* -std=c89
* -std=c99

```
gcc filename.c -o filename -std=c89
```
### Run (Linux)
```
./filename
```
### Run (Windows)
```
.\filename.exe
```

## Makefile for more than one source file

stack_project is an executable, calc.c and stack.c are dependend on stack.h.

```
stack_project: calc.o stack.o
	gcc calc.o stack.o -o stack_project

calc.o: calc.c stack.h
	gcc -c calc.c

stack.o: stack.c stack.h
	gcc -c stack.c
```

## More solutions

[Official 1/3 solutions provided by K.N. King](http://knking.com/books/c2/answers/index.html)

[Solutions by williamgherman](https://github.com/williamgherman/c-solutions)

[Solutions by Fahien](https://github.com/Fahien/exc)

[Solutions by twcamper](https://github.com/twcamper/c-programming)

[Solutions by fordea](https://github.com/fordea/c-programming-a-modern-approach)

[Solutions by auwsmit](https://github.com/auwsmit/cpama2)

[Solutions by ashksmith](https://github.com/ashksmith/c-programming-a-modern-approach-solutions)

[Solutions by cedarbird](https://github.com/cedarbird/C_Programming_A_Modern_Approach_Second_Edition)

## Licence and copyright
#### Programs made by Piotr Marendowski are free to use, but programs made by K.N. King are property of W. W. Norton & Company, Inc. see LICENCE file for more information about use, sharing or editing repository and code written here. Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. All rights reserved.
