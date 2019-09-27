COMPILER = "/usr/bin/g++"
# CPPFLAGS = "-D_GNU_SOURCE"

CFLAGS = -g -O2 -pipe -W -Wall -Werror -fPIC -v
CXXFLAGS = $(CFLAGS) -std=c++11 

# libpath
# LDFLAGS = -L/usr/lib -WI,R/var/lib

# use which lib
# LIBS = -lpthread -liconv

INC = -I.
object = single.o

singleton : $(object) demo.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) demo.cpp

single.o : head.h single/single.h single/single.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c single/single.cpp -o $@


.PHONY : clean
clean :
	- rm -rf singleton $(object)
