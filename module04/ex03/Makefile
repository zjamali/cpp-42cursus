NAME = game
CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =  Character.cpp Cure.cpp Ice.cpp AMeteria.cpp MateriaSource.cpp  main.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
HEADERS = AMateria.hpp ICharacter.hpp MateriaSource.hpp Character.hpp IMateriaSource.hpp Ice.hpp

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