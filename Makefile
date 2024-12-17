EXEC = hello.out
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g
FILE = test.hello

$(EXEC): $(objects)
	gcc $(objects) $(flags) -o $(EXEC)

all : $(EXEC)
%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

install:
	make
	cp ./hello.out /usr/local/bin/hello

test :
	-make
	./$(EXEC) $(FILE)

cls:
	-rm *.out
	-rm *.o
	-rm src/*.o

val :
	-make
	valgrind --leak-check=full --show-leak-kinds=all ./$(EXEC) $(FILE)