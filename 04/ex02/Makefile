NAME = abstract

SRC = main.cpp \
	  Animal.cpp \
	  Dog.cpp \
	  Cat.cpp \
	  Brain.cpp

OBJ = $(SRC:.cpp=.o)
INC = -I.

COMMON = 
LDFLAGS = $(COMMON)
CXXFLAGS = -Wall -Wextra -Werror -Wshadow $(INC) $(COMMON)
CXX = clang++

DEBUG = -g3
SANITIZE = -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

sanitize: COMMON += $(SANITIZE) $(DEBUG)
sanitize: all

tag:
	ctags $(SRC)

re: fclean all

.PHONY: all clean fclean re
