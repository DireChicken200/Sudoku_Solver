include ./build/mkenv.mk

#_MOBJ=Main.o
#MOBJ=$(patsubst %,$(BDIR)%, $(_MOBJ))

#_BOBJ=Ghost.o Neuron.o Nexus.o
#BOBJ=$(patsubst %, $(BDIR)%,$(_BOBJ))

SRC_C = $(wildcard src/*.cpp)
SRC_C += $(wildcard include/compile/*.cpp)

OBJ = $(addprefix $(BDIR), $(addsuffix .o, $(notdir $(basename $(SRC_C)))) )
#OBJ = ./build/objects/Main.o ./build/objects/Ghost.o  ./build/objects/Neuron.o ./build/objects/Nexus.o

SRC_H = $(wildcard include/*.hpp)

main: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

.PHONY : clean
clean :
	rm $(OBJ)

.PHONY : run
run :
	./$(NAME)

include ./build/mkrules.mk
