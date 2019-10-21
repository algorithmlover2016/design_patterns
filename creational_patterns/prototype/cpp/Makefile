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
.PHONY : directories

all : directories ${OUT_DIR}/main_prototype

# create output folder
directories : ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

INC = -I.
object = ${OUT_DIR}/shapes.o

${OUT_DIR}/main_prototype : $(object) demo.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) demo.cpp

${OUT_DIR}/shapes.o : head.h types/type.hpp shapes/shape.h shapes/shape.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c shapes/shape.cpp -o $@

.PHONY : clean
clean :
	- rm -rf ${OUT_DIR}/main_prototype $(object)
