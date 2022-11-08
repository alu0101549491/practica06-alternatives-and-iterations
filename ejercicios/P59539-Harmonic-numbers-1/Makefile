CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = harmonic_numbers_1
all: ${OBJ}
${OBJ}: object_harmonic_numbers_1
	${CC} ${CXXFLAGS} $@ $@.o
object_harmonic_numbers_1:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
