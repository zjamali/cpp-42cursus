NAME = hiThisIcBrain

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp

all: $(NAME)

$(NAME): $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all