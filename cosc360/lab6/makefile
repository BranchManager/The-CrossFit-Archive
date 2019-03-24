#CS 360 Lab 1 Makefile

CC = gcc 

INCLUDES = -I/home/plank/cs360/include -I.

CFLAGS = -g -fno-builtin-malloc $(INCLUDES)

LIBDIR = /home/plank/cs360/objs

LIBS = $(LIBDIR)/libfdr.a 

EXECUTABLES: maintest

all: $(EXECUTABLES)

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $*.c

maintest: maintest.o jmalloc.o
	$(CC) $(CFLAGS) -o maltest maintest.o jmalloc.o $(LIBS)

#make clean will rid your directory of the executable,
#object files, and any core dumps you've caused
clean:
	rm core $(EXECUTABLES) *.o


