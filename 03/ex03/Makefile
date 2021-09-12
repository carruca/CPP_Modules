NAME = diamondtrap

SRC = main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp \
	  FragTrap.cpp \
	  DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)
INC = -I.

CXXFLAGS = -Wall -Wextra -Werror -Wshadow $(INC)
CXX = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

tag:
	ctags $(SRC)

re: fclean all

.PHONY: all clean fclean re
