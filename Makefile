CC=clang
CFLAGS=

all:
	mkdir bin
	$(CC) $(CFLAGS) ls.c -o ./bin/ls
	$(CC) $(CFLAGS) cd.c -o ./bin/cd
	$(CC) $(CFLAGS) pwd.c -o ./bin/pwd
	$(CC) $(CFLAGS) cat.c -o ./bin/cat
	$(CC) $(CFLAGS) mkdir.c -o ./bin/mkdir
	$(CC) $(CFLAGS) yes.c -o ./bin/yes
	$(CC) $(CFLAGS) rm.c -o ./bin/rm
	$(CC) $(CFLAGS) cp.c -o ./bin/cp
	$(CC) $(CFLAGS) mv.c -o ./bin/mv
	$(CC) $(CFLAGS) touch.c -o ./bin/touch
clean:
	rm -rf bin
