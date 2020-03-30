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
conceptual_model = decorator
MAIN_BIN = main_$(conceptual_model)
.PHONY : directories

all : directories ${OUT_DIR}/${MAIN_BIN}

# create output folder
directories : ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

INC = -I.
object =
source_main = $(conceptual_model).cpp

${OUT_DIR}/${MAIN_BIN} : $(object) $(source_main)
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) $(source_main)

.PHONY : clean
clean :
	- rm -rf ${OUT_DIR}/${MAIN_BIN}* $(object)
