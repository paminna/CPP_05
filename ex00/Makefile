NAME = bureaucrat

SRC = Bureaucrat.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

.o.cpp:
	clang++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re