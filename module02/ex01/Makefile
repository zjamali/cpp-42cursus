NAME = fixedPoint
CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp Fixed.cpp

HEADERS = Fixed.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all