CC=gcc
CFLAGS=-static

all:
	mkdir bin
	$(CC) $(CFLAGS) ls.c -o ./bin/ls
	$(CC) $(CFLAGS) cd.c -o ./bin/cd
	$(CC) $(CFLAGS) pwd.c -o ./bin/pwd

clean:
	rm -rf bin
