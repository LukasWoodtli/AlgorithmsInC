cmake_minimum_required(VERSION 2.6)
project(AlgorithmsInC)

SET(CMAKE_BUILD_TYPE Debug)


SET(CMAKE_C_COMPILER gcc)

SET(CMAKE_CXX_COMPILER g++)

SET(CSTANDARD "-std=gnu99")
SET(CWARN "-g -Wall -Wstrict-prototypes")
#SET(CTUNING "-funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums")
SET(COPT "-Os")

SET(CFLAGS "${CMCU} ${CDEBUG} ${CDEFS} ${CINCS} ${COPT} ${CWARN} ${CSTANDARD} ${CEXTRA}")
SET(CXXFLAGS "${CMCU} ${CDEFS} ${CINCS} ${COPT}")

SET(CMAKE_C_FLAGS  ${CFLAGS})
SET(CMAKE_CXX_FLAGS ${CXXFLAGS})



set(CFILES
	main.c
	quickfind.c
  quickunion.c
	)

	
set(
	HFILES
	quickfind.h
  quickunion.h
	)
	
ADD_DEFINITIONS( -Wall )

ADD_EXECUTABLE( sort ${CFILES} ${HFLES} )

ADD_EXECUTABLE( shell_sort shell_sort.c )
