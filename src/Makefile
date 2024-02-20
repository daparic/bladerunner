main: main.cpp helper.o mycfg.h
	g++ -fsanitize=address -o main main.cpp mycfg.h helper.o

helper.o: helper.c
	gcc -c helper.c

clean:
	@rm -f main *.o *.bdf

.PHONY: clean
