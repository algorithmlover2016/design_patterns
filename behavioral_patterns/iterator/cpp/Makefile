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
conceptual_model = iterator
conceptual_model_ori = iterator_ori

MAIN_BIN = main_$(conceptual_model)
MAIN_BIN_ORI = main_$(conceptual_model_ori)

.PHONY : directories

all : directories ${OUT_DIR}/${MAIN_BIN} ${OUT_DIR}/${MAIN_BIN_ORI} link

# create output folder
directories : ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

link : ${OUT_DIR}/${MAIN_BIN} ${OUT_DIR}/${MAIN_BIN_ORI}
	@ rm -rf ${MAIN_BIN} 
	@ rm -rf ${MAIN_BIN_ORI} 
	${SOFTLINK} ${OUT_DIR}/${MAIN_BIN} ${MAIN_BIN} 
	${SOFTLINK} ${OUT_DIR}/${MAIN_BIN} ${MAIN_BIN_ORI} 


INC = -I.
object =
source_main = $(conceptual_model).cpp
source_main_ori = $(conceptual_model_ori).cpp

${OUT_DIR}/${MAIN_BIN} : $(object) $(source_main)
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) $(source_main)

${OUT_DIR}/${MAIN_BIN_ORI} : $(object) $(source_main_ori)
	$(COMPILER) $(CXXFLAGS) $(INC)  -o $@ $(object) $(source_main_ori)

.PHONY : clean
clean :
	- rm -rf ${OUT_DIR}/${MAIN_BIN}* $(object)
	- rm -rf ${MAIN_BIN}
	- rm -rf ${MAIN_BIN_ORI}
