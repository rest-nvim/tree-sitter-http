build:
	$(CC) -fPIC -c src/parser.c -o parser.o $(CFLAGS)
	$(CC) -shared -o parser/http.so *.o

