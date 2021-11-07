GCC := clang++ -std=c++98 -Wall -Wextra -Werror
SRC := ./main.cpp ./Cat.cpp ./Dog.cpp ./Animal.cpp ./WrongCat.cpp ./WrongAnimal.cpp
INC := ./Animal.hpp ./Dog.hpp ./Cat.hpp ./WrongCat.hpp ./WrongAnimal.hpp
NAME := poly
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
