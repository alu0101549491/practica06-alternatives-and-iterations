CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = numbers_in_an_interval
all: ${OBJ}
${OBJ}: object_numbers_in_an_interval
	${CC} ${CXXFLAGS} $@ $@.o
object_numbers_in_an_interval:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
