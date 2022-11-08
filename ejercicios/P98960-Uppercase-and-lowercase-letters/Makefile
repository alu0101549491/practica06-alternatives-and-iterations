CC = g++
CXXFLAGS = -std=c++17 -Wall -o
OBJ = uppercase_and_lowercase
all: ${OBJ}
${OBJ}: object_uppercase_and_lowercase
	${CC} ${CXXFLAGS} $@ $@.o
object_uppercase_and_lowercase:
	${CC} -c ${OBJ}.cc
clean:
	rm -f ${OBJ}.o
	rm -f ${OBJ}
