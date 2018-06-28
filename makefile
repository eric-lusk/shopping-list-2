CC=gcc
CFLAGS=-ggdb -lm -Wall
FILES = main.c ItemToPurchase.c
OUT=a.out

build: $(FILES)
	$(CC) $(CFLAGS) -o $(OUT) $(FILES)

clean:
	-rm -f *.out

rebuild: clean build
