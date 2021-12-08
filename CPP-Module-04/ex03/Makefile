GCC := clang++ -std=c++98 -Wall -Wextra -Werror

SRC :=	AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
		main.cpp \

INC :=	AMateria.hpp \
		Character.hpp \
		Cure.hpp \
		ICharacter.hpp \
		IMateriaSource.hpp \
		Ice.hpp \
		MateriaSource.hpp \

NAME := Materia
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







