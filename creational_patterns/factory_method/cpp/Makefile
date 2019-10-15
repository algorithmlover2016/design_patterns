COMPILER = "/usr/bin/g++"
# CPPFLAGS = "-D_GNU_SOURCE"

CFLAGS = -g -O2 -pipe -W -Wall -Werror -fPIC -v
CXXFLAGS = $(CFLAGS) -std=c++11 

# libpath
# LDFLAGS = -L/usr/lib -WI,R/var/lib

# use which lib
# LIBS = -lpthread -liconv

INC = -I.
object = buttons.o factories.o

main_factory : $(object) demo.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) demo.cpp

buttons.o : head.h buttons/button.h buttons/button.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c buttons/button.cpp -o $@

factories.o : head.h buttons/button.h factories/factory.h factories/factory.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c factories/factory.cpp -o $@

.PHONY : clean
clean :
	- rm -rf main_factory $(object)
