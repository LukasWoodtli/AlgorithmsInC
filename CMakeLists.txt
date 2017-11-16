cmake_minimum_required(VERSION 2.6)
project(AlgorithmsInC)

SET(CMAKE_BUILD_TYPE Debug)
SET(CMAKE_C_FLAGS "-g -Wall -Wstrict-prototypes -std=gnu99")

set(CFILES
	main.c
	quickfind.c
    quickunion.c)

set(HFILES
	quickfind.h
    quickunion.h)

ADD_EXECUTABLE( sort ${CFILES} ${HFLES} )

ADD_EXECUTABLE( shell_sort shell_sort.c )
