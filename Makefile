all:
	mkdir bin
	gcc ls.c -o ./bin/ls


clean:
	rm -rf bin
