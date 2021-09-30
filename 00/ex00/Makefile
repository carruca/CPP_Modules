NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror
CXX = clang++

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
