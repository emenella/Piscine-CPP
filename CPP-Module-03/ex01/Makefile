GCC := clang++ -std=c++98 -Wall -Wextra -Werror
SRC := ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp
INC := ./ClapTrap.hpp ./ScavTrap.hpp
NAME := scavtrap
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(GCC) -o $(NAME) $(OBJ)

%.o: %.cpp $(INC)
		$(GCC) -o $@ -c $<

clean:
		rm -f $(OBJ) 

fclean:
		rm -f $(NAME) $(OBJ) 

re: fclean all
