NAME = ex01
CFLAGS = -Wall -Werror -Wextra
CC = c++

SRC_NAME = main.cpp span.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

HEADER = span.hpp

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
