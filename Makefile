# No judgement. First makefile

# Compiler
CC=g++

# Directories and Source
BUILDDIR=obj
TARGETDIR=bin
OBJECTS = $(addprefix $(BUILDDIR)/, program.o parsing.o sorting.o day1.o day2.o)

# Flags
CFLAGS=-c

all: directories program

directories:
	mkdir -p ${TARGETDIR}
	mkdir -p ${BUILDDIR}

program: ${OBJECTS}
	${CC} ${OBJECTS} -o ${TARGETDIR}/program

${BUILDDIR}/program.o: program.cpp
	$(CC) $(CFLAGS) $< -o $@

${BUILDDIR}/parsing.o: tools/parsing.cpp
	$(CC) $(CFLAGS) $< -o $@

${BUILDDIR}/sorting.o: tools/sorting.cpp
	$(CC) $(CFLAGS) $< -o $@

${BUILDDIR}/day1.o: day1/day1.cpp
	$(CC) $(CFLAGS) $< -o $@

${BUILDDIR}/day2.o: day2/day2.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf ${BUILDDIR}/