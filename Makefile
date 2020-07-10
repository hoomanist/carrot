CC=gcc
CFLAGS=-static

all:
	mkdir bin
	$(CC) $(CFLAGS) ls.c -o ./bin/ls
	$(CC) $(CFLAGS) cd.c -o ./bin/cd
	$(CC) $(CFLAGS) pwd.c -o ./bin/pwd
	$(CC) $(CFLAGS) cat.c -o ./bin/cat
clean:
	rm -rf bin
