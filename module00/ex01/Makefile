NAME = Phonebook

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp Contact.cpp Phonebook.cpp

HEADERS = Contact.hpp Phonebook.hpp
all: $(NAME)

$(NAME): $(HEADERS) $(SRC_NAME)
	$(CC) $(CFLAGS) $(SRC_NAME) -o $@

fclean:
	rm -rf $(NAME)
re: fclean all