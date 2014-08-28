#FLAGS= -g -O0 -Wall
FLAGS= -O3 -Wall
GAMELIB= -L$(LIBGAME_DIR)/lib -lgame -lm
GAMEINCLUDES= -I$(LIBGAME_DIR)/include

libgame:  
	cd $(LIBGAME_DIR); $(MAKE) -C $(LIBGAME_DIR); cd -;

$@.cpp: 
	$(MAKE) libgame;
	g++ $(FLAGS) $@.cpp -o $@ $(GAMEINCLUDES) $(GAMELIB);

