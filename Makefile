CC=gcc

all:
	mkdir bin
	$(CC) ls.c -o ./bin/ls
	$(CC) cd.c -o ./bin/cd
	$(CC) pwd.c -o ./bin/pwd

clean:
	rm -rf bin
