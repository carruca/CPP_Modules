NAME = attack

SRC = main.cpp \
	  Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp

OBJ = $(SRC:.cpp=.o)
INC = -I.

CXXFLAGS = -Wall -Wextra -Werror $(INC)
CXX = clang++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(INC) $^ -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

tag:
	ctags $(SRC) Weapon.hpp HumanA.hpp HumanB.hpp

re: fclean all

.PHONY: all clean fclean re
