GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

NAME = ClapTrap

CC = g++ -Wall -Werror -Wextra -std=c++98

RM = rm -f

SRCS = main.cpp ClapTrap.cpp

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
