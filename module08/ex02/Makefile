NAME = iterator
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = main.cpp mutantstack.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

HEADER = mutantstack.hpp

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)

fclean: clean 
	rm -rf $(NAME)

re: fclean all
