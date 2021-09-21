# Main.o Rule
$(BDIR)Main.o : $(MDIR)Main.cpp
	$(OCC) -o $(BDIR)Main.o $(MDIR)Main.cpp
# Rule for all .o files except Main
#$@ is the reference of $(BDIR)%.o, $< is the reference of $(IDIR)%.cpp
$(BDIR)%.o : $(IDIR)%.cpp $(SRC_H) Makefile
	$(OCC) $< -o $@
