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

all : directories ${OUT_DIR}/main_factory

# create output folder
directories : ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

INC = -I.
object = ${OUT_DIR}/director.o ${OUT_DIR}/cars.o ${OUT_DIR}/builders.o ${OUT_DIR}/components.o

${OUT_DIR}/main_factory : $(object) demo.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) demo.cpp

${OUT_DIR}/components.o : head.h cars/car.h components/components.h components/components.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c components/components.cpp -o $@

${OUT_DIR}/builders.o : head.h cars/car.h components/components.h builders/builder.h builders/builder.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c builders/builder.cpp -o $@

${OUT_DIR}/cars.o : head.h components/components.h enums/enum.hpp cars/car.h cars/car.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c cars/car.cpp -o $@

${OUT_DIR}/director.o : head.h components/components.h builders/builder.h cars/car.h director/director.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c director/director.cpp -o $@

.PHONY : clean
clean :
	- rm -rf ${OUT_DIR}/main_factory $(object)
