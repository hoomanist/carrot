CC=clang
CFLAGS=-static

all:
	mkdir bin
	$(CC) $(CFLAGS) ls.c -o ./bin/ls
	$(CC) $(CFLAGS) cd.c -o ./bin/cd
	$(CC) $(CFLAGS) pwd.c -o ./bin/pwd
	$(CC) $(CFLAGS) cat.c -o ./bin/cat
	$(CC) $(CFLAGS) mkdir.c -o ./bin/mkdir
clean:
	rm -rf bin
