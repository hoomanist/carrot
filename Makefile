CC="gcc"

all:
	mkdir bin
	$(CC) ls.c -o ./bin/ls
clean:
	rm -rf bin
