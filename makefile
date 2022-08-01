CC = g++
CFLAGS =  -std=c++11 -Wall
TARGET = program

BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

${TARGET}: ${BUILD_DIR}/Pessoa.o
	${CC} ${CFLAGS} ${BUILD_DIR}/*.o -o ${TARGET}

${BUILD_DIR}/Pessoa.o: ${INCLUDE_DIR}/Pessoa.hpp ${SRC_DIR}/Pessoa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Pessoa.cpp -o ${BUILD_DIR}/Pessoa.o
