SRCS = main.cpp PhoneBook.cpp Contact.cpp
NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME) 

clean:
	@$(RM) $(NAME) 

fclean: clean

re: fclean all

.PHONEY: all clean fclean re