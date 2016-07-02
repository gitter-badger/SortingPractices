.PHONY: compilation execution clean

CFLAGS = -Wall -fdiagnostics-color=always -std=c++14 -O2
LFLAGS = -Wall -fdiagnostics-color=always -std=c++14 -O2
# XFLAGS = -finput-charset=Big5 -fexec-charset=Big5
GTEST = -isystem C:/Users/USER/include lib/gtest.a -DGTEST -DLOCAL
GDB = -isystem C:/Users/USER/include lib/gtest.a -g -DGDB -DLOCAL
INC = -I /usr/foo/include #include headers
LIB = -L /usr/foo/lib     #include libraries

SRC = $(wildcard src/*.cpp) $(wildcard src/algorithms/*.cpp)
OBJ = $(SRC:src/%.cpp=bin/%.o)
EXE = judge.exe

ifneq (${VSCODE}, true)
	END   = $(shell echo -e "\033[0m")
	HIDE  = $(shell echo -e "\033[0;30m")
	ERROR = $(shell echo -e "\033[0;31m")
	OK    = $(shell echo -e "\033[0;32m")
	WARN  = $(shell echo -e "\033[0;33m")
endif


compilation: $(EXE)
	@ echo "The programs have been compiled successfully."
	
execution:
	@ $(EXE)
	
clean:
	rm -rf $(OBJ) $(EXE)


$(EXE): $(OBJ)
	@ g++ $(OBJ) -o $@ $(LFLAGS)
	@ echo "Linking completed."
	
$(OBJ): bin/%.o : src/%.cpp
	@ g++ -c $< -o $@ $(CFLAGS)
	@ echo "Compiling "$<" completed."
