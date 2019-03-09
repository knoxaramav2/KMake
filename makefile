CC = g++
BINPATH=$(shell pwd)/bin
CFLAGS = -std=gnu++17 -Wall -I../KDK/headers -Iheaders -g
LFLAGS = -lm -ldl -lpthread
VERSION=-DRTEVERSION=\"0.0.1\"
OUT = KMake
CLEANEXT = o a
BITVRS=64
DBGFLAG=
SRC=global.cpp main.cpp

ifeq ($(shell uname), Linux)
	FixPath = $1
	PLATFORM = -D__LINUX
	OSMODE = -DBITMODE=$(BITVRS)
	EXPORT_PATH=bin/
	EXT=
	RUNPATH=./$(EXPORT_PATH)$(OUT)$(EXT)
else
#Windows
	FixPath = $(subst /,\,$1)
	PLATFORM = -D__WINDOWS
	OSMODE = -DBITMODE=$(BITVRS)
	EXPORT_PATH=bin/
	EXT=.exe
	RUNPATH=$(EXPORT_PATH)$(OUT)$(EXT)
endif

all:
	$(CC) $(SRC) $(OSMODE) $(CFLAGS) $(VERSION) $(PLATFORM) $(LFLAGS) -o $(RUNPATH)

.PHONY: clean
clean:
	rm -f $@ *.o

.PHONY: run
run:
	bin/KMake

.PHONY: dbg
dbg: $(OUT)
	$(RUNPATH) $(DBGFLAGS)