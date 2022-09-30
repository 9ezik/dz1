all: main test

main: dz.c
	gcc dz.c -o dz
test: dz
	./dz
