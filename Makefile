export LIB_DIR=./lib
export INCLUDE_DIR=./include
export INCLUDES = -I $(INCLUDE_DIR)
export SRC_DIR=./src
export OBJ_DIR=./obj
export DEMO_DIR=./demo

# Flags. Debug or Otimized
#export FLAGS= -ggdb -O0 -Wall -D _DEBUG
export FLAGS= -O3 -Wall

SOURCES=$(shell ls $(SRC_DIR))


all: libgame
	@echo "libgame.a created..."
	@echo "DONE."

docs:
	doxygen $(LIBGAME_DIR)/libgame-doc-config

libgame: 
	@mkdir -p obj;
	@mkdir -p bin;
	@mkdir -p lib;
	@mkdir -p doc;
	@#This compiles all cpp files within SRC_DIR
	@echo "";
	$(foreach source, $(SOURCES), g++ $(FLAGS) -c $(SRC_DIR)/$(source) $(INCLUDES) -o $(OBJ_DIR)/$(subst .cpp,,$(source)).o;)
	@echo "";
	ar csr   $(LIB_DIR)/libgame.a \
	$(foreach source, $(SOURCES), $(OBJ_DIR)/$(subst .cpp,,$(source)).o)


clean:
	rm -f $(LIB_DIR)/lib*.a;
	rm -f $(OBJ_DIR)/*.o;
