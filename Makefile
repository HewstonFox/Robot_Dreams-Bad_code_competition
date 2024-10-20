test: clean weird_rand.c test.c
	gcc -w -o test test.c weird_rand.c -I./
	./test

clean:
	rm -f test

