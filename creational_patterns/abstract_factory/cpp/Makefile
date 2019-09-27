COMPILER = "/usr/bin/g++"
# CPPFLAGS = "-D_GNU_SOURCE"

CFLAGS = -g -O2 -pipe -W -Wall -Werror -fPIC -v
CXXFLAGS = $(CFLAGS) -std=c++11 

# libpath
# LDFLAGS = -L/usr/lib -WI,R/var/lib

# use which lib
# LIBS = -lpthread -liconv

INC = -I.
object = buttons.o checkboxes.o factories.o app.o

abstract_factory : $(object) abstract_factory.cpp
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) abstract_factory.cpp

buttons.o : head.h buttons/button.h buttons/button.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c buttons/button.cpp -o $@

checkboxes.o : head.h checkboxes/checkbox.h checkboxes/checkbox.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c checkboxes/checkbox.cpp -o $@

app.o : head.h buttons/button.h checkboxes/checkbox.h factories/gui_factory.h app/application.h app/application.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c app/application.cpp -o $@

factories.o : head.h buttons/button.h checkboxes/checkbox.h factories/gui_factory.h factories/gui_factory.cpp
	$(COMPILER) $(CXXFLAGS) $(INC) -c factories/gui_factory.cpp -o $@

.PHONY : clean
clean :
	- rm -rf abstract_factory $(object)
