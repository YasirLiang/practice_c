CC=gcc

all:additive_main

additive_main:additivesequence.c
	$(CC) -o $@ additivesequence.c

clean:
	rm -rf additive_main

