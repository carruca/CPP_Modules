NAME = phonebook

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror
++ = clang++
RM = rm

all: $(NAME)

$(NAME): $(OBJ)
	$(++) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
