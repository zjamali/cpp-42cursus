NAME = traingle
CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	Fixed.cpp Point.cpp bsp.cpp   main.cpp

HEADERS = Fixed.hpp Point.hpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)
fclean: clean
	rm -rf $(NAME)
re: fclean all