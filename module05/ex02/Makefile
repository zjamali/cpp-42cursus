NAME = forms
CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
HEADERS = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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