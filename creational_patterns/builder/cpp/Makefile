COMPILER = "/usr/bin/g++"
# CPPFLAGS = "-D_GNU_SOURCE"

CFLAGS = -g -O2 -pipe -W -Wall -Werror -fPIC -v
CXXFLAGS = $(CFLAGS) -std=c++11 

# libpath
# LDFLAGS = -L/usr/lib -WI,R/var/lib

# use which lib
# LIBS = -lpthread -liconv

INC = -I.
object = director.o cars.o builders.o components.o

main_factory : $(object) demo.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) demo.cpp

components.o : head.h cars/car.h components/components.h components/components.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c components/components.cpp -o $@

builders.o : head.h cars/car.h components/components.h builders/builder.h builders/builder.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c builders/builder.cpp -o $@

cars.o : head.h components/components.h enums/enum.hpp cars/car.h cars/car.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c cars/car.cpp -o $@

director.o : head.h components/components.h builders/builder.h cars/car.h director/director.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c director/director.cpp -o $@

.PHONY : clean
clean :
	- rm -rf main_factory $(object)
