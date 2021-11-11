NAME = Account

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	Account.cpp tests.cpp
HEADERS = Account.hpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f *.o
fclean: clean 
	rm -rf $(NAME)
re: fclean all