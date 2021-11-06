GCC := clang++ -std=c++98 -Wall -Wextra -Werror -Wshadow -Wno-shadow
SRC := ./main.cpp ./ClapTrap.cpp ./FragTrap.cpp ./ScavTrap.cpp ./DiamondTrap.cpp
INC := ./ClapTrap.hpp ./FragTrap.hpp ./ScavTrap.hpp ./DiamondTrap.hpp
NAME := diamondtrap
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
