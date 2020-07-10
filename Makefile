CC=gcc

all:
	mkdir bin
	$(CC) ls.c -o ./bin/ls
	$(CC) cd.c -o ./bin/cd

clean:
	rm -rf bin
