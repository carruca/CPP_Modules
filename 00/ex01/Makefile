NAME = phonebook

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror
CXX = clang++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
