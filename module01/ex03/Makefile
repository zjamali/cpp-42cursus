NAME = unnecessaryViolence

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all