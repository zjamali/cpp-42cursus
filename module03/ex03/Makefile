NAME = DiamondTrap
CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

HEADERS = ClapTrap.hpp  FragTrap.hpp DiamondTrap.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all