NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror
CXX = clang++
RM = rm

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
