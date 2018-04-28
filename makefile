NAME = fillit

SRCS = SOURCES/errors.c \
	   SOURCES/grid.c \
	   SOURCES/piece.c \
	   SOURCES/reader.c \
	   SOURCES/resolver.c \
	   SOURCES/writer.c \
	   SOURCES/tests.c \
	   SOURCES/main.c

CC = gcc -Wall -Werror -Wextra

LIBFT_DIR = Libft/

LIBFT = Libft/libft.a

$(NAME) :
	@cd $(LIBFT_DIR) && make all
	@cd ../
	@$(CC) $(SRCS) -o $(NAME) -LLibft -lft
	@echo "ARE YOU READY TO FEEL IT ?"	

all : $(NAME)

clean :
	@cd $(LIBFT_DIR) && make clean

fclean : clean
	@rm -f $(LIBFT)
	@rm $(NAME)
	@echo "Libft library deleted."
	@echo "Fillit executable deleted."

re : fclean all

