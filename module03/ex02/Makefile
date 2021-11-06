NAME = FragTrap
CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp ClapTrap.cpp FragTrap.cpp

HEADERS = ClapTrap.hpp  FragTrap.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all