ifeq ($(OS),Linux)
    CPPFLAGS += -fsanitize=address
endif

main: main.cpp helper.o mycfg.h shape_predictor_5_face_landmarks.o
	g++ $(CPPFLAGS) -o main main.cpp mycfg.h helper.o shape_predictor_5_face_landmarks.o

%.o: %.c
	gcc -c $<

shape_predictor_5_face_landmarks.c: shape_predictor_5_face_landmarks/
	@t=$$(mktemp); \
	cat shape_predictor_5_face_landmarks/shape_predictor_5_face_landmarks_a* > $$t; \
	xxd -i $$t shape_predictor_5_face_landmarks.c; \
	rm -f $$t

clean:
	@rm -f main *.o *.bdf

.PHONY: clean
