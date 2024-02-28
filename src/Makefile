ifeq ($(OS),Linux)
    CPPFLAGS += -fsanitize=address
endif

main: main.cpp helper.o mycfg.h
	g++ $(CPPFLAGS) -o main main.cpp mycfg.h helper.o

helper.o: helper.c
	gcc -c helper.c

clean:
	@rm -f main *.o *.bdf

.PHONY: clean
