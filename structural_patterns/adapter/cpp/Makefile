COMPILER = "/usr/bin/g++"
# CPPFLAGS = "-D_GNU_SOURCE"

CFLAGS = -g -O2 -pipe -W -Wall -Werror -fPIC -v
CXXFLAGS = $(CFLAGS) -std=c++11 

# libpath
# LDFLAGS = -L/usr/lib -WI,R/var/lib

# use which lib
# LIBS = -lpthread -liconv

MKDIR_P = mkdir -p
OUT_DIR = output
MAIN_BIN = main_adapter
.PHONY : directories

all : directories ${OUT_DIR}/${MAIN_BIN}

# create output folder
directories : ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

INC = -I.
object = ${OUT_DIR}/graphics.o ${OUT_DIR}/adapters.o

${OUT_DIR}/${MAIN_BIN} : $(object) demo.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) demo.cpp

${OUT_DIR}/graphics.o : head.h graphics/graphics.h graphics/graphics.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c graphics/graphics.cpp -o $@

${OUT_DIR}/adapters.o : head.h graphics/graphics.h adapters/square_peg_adapter.h adapters/square_peg_adapter.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c adapters/square_peg_adapter.cpp -o $@

.PHONY : clean
clean :
	- rm -rf ${OUT_DIR}/${MAIN_BIN} $(object)
