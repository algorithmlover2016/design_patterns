COMPILER = "/usr/bin/g++"
# CPPFLAGS = "-D_GNU_SOURCE"

CFLAGS = -g -O2 -pipe -W -Wall -Werror -fPIC -v
CXXFLAGS = $(CFLAGS) -std=c++11 

# libpath
# LDFLAGS = -L/usr/lib -WI,R/var/lib

# use which lib
# LIBS = -lpthread -liconv

MKDIR_P = mkdir -p
SOFTLINK = ln -s
OUT_DIR = output

# need to modify symbol
conceptual_model = state

MAIN_BIN = main_$(conceptual_model)
.PHONY : directories

all : directories ${OUT_DIR}/${MAIN_BIN} link

# create output folder
directories : ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

link : ${OUT_DIR}/${MAIN_BIN}
	@ rm -rf ${MAIN_BIN} 
	${SOFTLINK} ${OUT_DIR}/${MAIN_BIN} ${MAIN_BIN} 


INC = -I.
object =
source_main = $(conceptual_model).cpp

${OUT_DIR}/${MAIN_BIN} : $(object) $(source_main)
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) $(source_main)

.PHONY : clean
clean :
	- rm -rf ${OUT_DIR}/${MAIN_BIN}* $(object)
	- rm -rf ${MAIN_BIN}
