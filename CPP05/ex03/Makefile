GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

NAME = Intern

CC = c++ -Wall -Werror -Wextra -std=c++98

RM = rm -f

SRCS = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) -o $(NAME)
		@echo "$(GREEN)$(NAME) created$(RESET)"

fclean:
		@$(RM) $(NAME) $(OBJ)
		@echo "$(RED)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all fclean re
