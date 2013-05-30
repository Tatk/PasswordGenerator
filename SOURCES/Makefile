install: all

all: pass_generator

pass_generator: pass_generator.o rand_functions.o
		gcc -o pass_generator pass_generator.o rand_functions.o -lreadline

pass_generator.o: pass_generator.h
		gcc -c -o pass_generator.o pass_generator.c -lreadline

rand_functions.o: rand_functions.c pass_generator.h
		gcc -c -o rand_functions.o rand_functions.c -lreadline

.PHONY: clean

clean:
		rm -f pass_generator pass_generator.o rand_functions.o
