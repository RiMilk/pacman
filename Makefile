CPP_FILES		:= $(wildcard src/*.cpp)
RC_FILES		:= $(wildcard res/*.rc)
O_FILES			:= $(subst .cpp,.o,$(CPP_FILES)) $(subst .rc,.o,$(RC_FILES))
COMPILED_FLAGS	:= -W -Wall
LINKED_FLAGS	:= -s

INCLUDE_DIRECTORIES	:= -Iinclude

LIB_DIRECTORIES		:= -Llib

LIB_FILES			:= -lopenal32 -lsfml-system -lsfml-graphics -lsfml-window

pacman: $(O_FILES)
	g++ $^ -o $@ $(LIB_DIRECTORIES) $(LIB_FILES) $(LINKED_FLAGS)

%.o: %.cpp
	g++ -c $^ -o $@ $(INCLUDE_DIRECTORIES) $(COMPILED_FLAGS) 

%.o: %.rc
	windres $^ -o $@ $(INCLUDE_DIRECTORIEs)

clean:
	del *.o *.exe /s