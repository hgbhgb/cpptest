SRC = $(wildcard ./*.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))
CFLAGS += -std=c++11
CFLAGS += -g
CFLAGS += -I ./

ALL : test

test : $(OBJ)
	g++ $(CFLAGS) $^ -o $@    
$(OBJ) : %.o : %.cpp
	g++ $(CFLAGS) -c $< -o $@
clean :
	rm -rf test $(OBJ)
