NAME = ZombieHorde

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp zombie.cpp  ZombieHorde.cpp

HEADERS = zombie.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all