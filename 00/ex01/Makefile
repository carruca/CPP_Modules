NAME = phonebook

SRC = main.cpp \
      PhoneBook.cpp \
	  Contact.cpp
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
	ctags $(SRC) PhoneBook.hpp Contact.hpp

re: fclean all

.PHONY: all clean fclean re
