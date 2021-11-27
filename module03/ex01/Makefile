NAME = ScavTrap
CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp ClapTrap.cpp ScavTrap.cpp

HEADERS = ClapTrap.hpp  ScavTrap.hpp

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