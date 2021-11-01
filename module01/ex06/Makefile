NAME = karenFilter

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp Karen.cpp

HEADERS = Karen.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all