#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/06 15:50:09 by jmarques          #+#    #+#              #
#    Updated: 2018/04/26 13:16:57 by jmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 		ft_putstr_non_printable.c \
			ft_str_is_alpha.c \
			ft_strcat.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_strupcase.c \ft_atoi_base.c \
			ft_bzero.c \
			ft_concat_params.c \
			ft_create_elem.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_list_at.c \
			ft_list_clear.c \
			ft_list_cpy.c \
			ft_list_find.c \
			ft_list_last.c \
			ft_list_print.c \
			ft_list_push_back.c \
			ft_list_push_front.c \
			ft_list_push_params.c \
			ft_list_reverse.c \
			ft_list_size.c \
			ft_list_sort.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_base.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_charac_is_whitespace.c \
			ft_charac_is_base.c \
			ft_charac_is_sign.c \
			ft_numvalue_in_base.c \
			ft_strdup.c \
			ft_atoi.c \
			ft_strchr.c \
			ft_strrchr.c

OBJ = 		ft_putstr_non_printable.o \
			ft_str_is_alpha.o \
			ft_strcat.o \
			ft_strclr.o \
			ft_strcpy.o \
			ft_strcmp.o \
			ft_strdel.o \
			ft_strequ.o \
			ft_striter.o \
			ft_striteri.o \
			ft_strjoin.o \
			ft_strlcat.o \
			ft_strlen.o \
			ft_strmap.o \
			ft_strmapi.o \
			ft_strncat.o \
			ft_strncmp.o \
			ft_strncpy.o \
			ft_strnequ.o \
			ft_strnew.o \
			ft_strnstr.o \
			ft_strsplit.o \
			ft_strstr.o \
			ft_strsub.o \
			ft_strtrim.o \
			ft_strupcase.o \ft_atoi_base.o \
			ft_bzero.o \
			ft_concat_params.o \
			ft_create_elem.o \
			ft_isalnum.o \
			ft_isalpha.o \
			ft_isascii.o \
			ft_isdigit.o \
			ft_isprint.o \
			ft_itoa.o \
			ft_list_at.o \
			ft_list_clear.o \
			ft_list_cpy.o \
			ft_list_find.o \
			ft_list_last.o \
			ft_list_print.o \
			ft_list_push_back.o \
			ft_list_push_front.o \
			ft_list_push_params.o \
			ft_list_reverse.o \
			ft_list_size.o \
			ft_list_sort.o \
			ft_lstadd.o \
			ft_lstdel.o \
			ft_lstdelone.o \
			ft_lstiter.o \
			ft_lstmap.o \
			ft_lstnew.o \
			ft_memalloc.o \
			ft_memccpy.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_memcpy.o \
			ft_memdel.o \
			ft_memmove.o \
			ft_memset.o \
			ft_putchar.o \
			ft_putchar_fd.o \
			ft_putendl.o \
			ft_putendl_fd.o \
			ft_putnbr.o \
			ft_putnbr_base.o \
			ft_putnbr_fd.o \
			ft_putstr.o \
			ft_putstr_fd.o \
			ft_tolower.o \
			ft_toupper.o \
			ft_charac_is_whitespace.o \
			ft_charac_is_base.o \
			ft_charac_is_sign.o \
			ft_numvalue_in_base.o \
			ft_strdup.o \
			ft_atoi.o \
			ft_strchr.o \
			ft_strrchr.o 

CC = gcc -Wall -Werror -Wextra

$(NAME) :
	@$(CC) -c $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Libft Library ready to use."

all : $(NAME)

clean :
	@rm -f $(OBJ)
	@echo "Libft's objects files deleted."

fclean : clean
	@rm -f $(NAME)
	@echo "Libft library deleted."

re : fclean all

