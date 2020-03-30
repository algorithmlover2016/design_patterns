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
MAIN_BIN = main_bridge
.PHONY : directories

all : directories ${OUT_DIR}/${MAIN_BIN}

# create output folder
directories : ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

INC = -I.
object =

${OUT_DIR}/${MAIN_BIN} : $(object) bridge.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) bridge.cpp

.PHONY : clean
clean :
	- rm -rf ${OUT_DIR}/${MAIN_BIN}* $(object)
