NAME = Account

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	Account.cpp tests.cpp

HEADERS = Account.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all