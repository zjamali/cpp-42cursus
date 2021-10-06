NAME = megaphone

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@


fclean:
	rm -rf $(NAME)
re: fclean all