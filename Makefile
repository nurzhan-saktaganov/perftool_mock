ifeq ($(INTEL_COMPILER), 1)
	CC=icc
else
	CC=gcc
endif

BIN=bin
SRC=src
INC=-I$(src)

MICFLAG=
ifeq ($(MIC), 1)
	MICFLAG = -mmic
endif

all: builddir omp_dbg.so

.PHONY: builddir
builddir:
	mkdir -p $(BIN)

omp_dbg.so:	$(SRC)/omp_dbg.h $(SRC)/omp_dbg.c
	$(CC) -Wall $(MICFLAG) -shared -fPIC -o $(BIN)/omp_dbg.so $(SRC)/omp_dbg.c
