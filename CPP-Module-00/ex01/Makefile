GCC := clang++ -Wall -Wextra -Werror
SRC := ./contact.cpp ./phonebook.cpp ./main.cpp
INC := ./contact.h ./phonebook.h
NAME := phonebook
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