##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CFLAGS = -W -g3 -L./src/lib/my -lmy -I./src/include

SRC	= 	src/fs.c	\
		src/bsq.c	\
		src/utils_calc.c	\

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(SRC)
	@echo -e "\e[0m\e[1mConstruction de la librairie..."
	@cd src/lib/my && make --no-print-directory
	@echo -e "\e[1m\e[32mConstruction terminée avec succès !"
	@echo -e "\e[0m\e[1mConstruction de l'executable..."
	@gcc -o $(NAME) $(SRC) $(CFLAGS)
	@echo -e "\e[1m\e[32mConstruction terminée avec succès !"
clean:
	@echo -e "\e[0m\e[1mNettoyage des fichiers..."
fclean:	clean
	@rm -f $(NAME)
	@rm -f ../../include/$(NAME)
re:	fclean all
