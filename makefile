CC = g++
BINPATH=$(shell pwd)/bin
CFLAGS = -std=gnu++17 -Wall -Iheaders -g
LFLAGS = -lm -ldl -lpthread
VERSION=-DRTEVERSION=\"0.0.1\"
OUT = KMake
CLEANEXT = o a
BITVRS=64
DBGFLAG=
SRC=abstract/config.cpp crossplat.cpp providers/global.cpp main.cpp
OBJ=$(SRC:.cpp=.o)

EPATH=$(BINPATH)/$(BITVRS)/$(OUT)

ifeq ($(shell uname), Linux)
	FixPath = $1
	PLATFORM = -D__LINUX
	OSMODE = -DBITMODE=$(BITVRS)
	EXT=
else
#Windows
	FixPath = $(subst /,\,$1)
	PLATFORM = -D__WINDOWS
	OSMODE = -DBITMODE=$(BITVRS)
	EXT=.exe
endif

RUNPATH=$(EPATH)$(EXT)

#all:
#	$(CC) $(SRC) $(OSMODE) $(CFLAGS) $(VERSION) $(PLATFORM) $(LFLAGS) -o $(RUNPATH)

all: $(RUNPATH)
	echo $(OUT) Done.

.cpp.o:
	$(CC) $(CFLAGS) -c -o $@ $<

$(RUNPATH) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

.PHONY: clean
clean:
	rm -f $@ *.o

.PHONY: run
run:
	$(RUNPATH)

.PHONY: dbg
dbg: $(OUT)
	$(RUNPATH) $(DBGFLAGS)