GCC := clang++ -std=c++98 -Wall -Wextra -Werror
SRC := ./main.cpp ./ZombieHorde.cpp ./Zombie.cpp
INC := ./Zombie.hpp
NAME := zombie
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(GCC) -o $(NAME) $(OBJ)

%.o: %.cpp
		$(GCC) -o $@ -c $<

clean:
		rm -f $(OBJ) 

fclean:
		rm -f $(NAME) $(OBJ) 

re: fclean all