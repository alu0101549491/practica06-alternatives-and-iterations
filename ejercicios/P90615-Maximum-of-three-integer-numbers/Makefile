CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = maximum_of_three_integer_numbers
all: ${OBJ}
${OBJ}: object_maximum_of_three_integer_numbers
	${CC} ${CXXFLAGS} $@ $@.o
object_maximum_of_three_integer_numbers:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
