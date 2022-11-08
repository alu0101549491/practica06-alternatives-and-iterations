CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = add_one_second
all: ${OBJ}
${OBJ}: object_add_one_second
	${CC} ${CXXFLAGS} $@ $@.o
object_add_one_second:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
