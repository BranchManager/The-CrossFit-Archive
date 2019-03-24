# CS360 Class Manager
# August 29, 2000
CC = gcc
CLASSDIR = /home/huangj/cs360
INCLUDES = $(CLASSDIR)/include

CFLAGS = -g -I$(INCLUDES) -DMALL
#CFLAGS = -g -I$(INCLUDES) -DJMALL

LIBDIR = $(CLASSDIR)/objs
LIBS = /home/cs360/pub/libfdr.a
EXECUTABLES = free_test kgobble malloctest

all: $(EXECUTABLES)

clean:
	rm -f core $(EXECUTABLES) *.o

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $*.c

free_test: free_test.o malloc.o malloc.h
	$(CC) $(CFLAGS) -o free_test free_test.o malloc.o

kgobble: kgobble.o malloc.o malloc.h
	$(CC) $(CFLAGS) -o kgobble kgobble.o malloc.o

malloctest: malloctest.o malloc.o malloc.h
	$(CC) $(CFLAGS) -o malloctest malloctest.o malloc.o

