# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 23:06:31 by aguyon            #+#    #+#              #
#    Updated: 2023/10/12 19:21:28 by aguyon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_ALLOC		=	alloc/

DIR_BTREE		=	btree/

DIR_CONVERT		=	convert/

DIR_IO			=	io/

DIR_LIST		=	list/

DIR_PREDICATE	=	predicate/

DIR_STRING		=	string/

DIR_XLIB		=	xlib/

DIR_PRINTF		=	printf/

DIR_LIB_ALLOC	=	liballoc/

NAME_ALLOC		=	ft_calloc.c \
					ft_realloc.c

NAME_BTREE		=	btree_apply_by_level.c \
					btree_apply_infix.c \
					btree_apply_prefix.c \
					btree_apply_suffix.c \
					btree_array_to_tree.c \
					btree_create_node.c \
					btree_free.c \
					btree_insert_data.c \
					btree_level_count.c \
					btree_search_item.c

NAME_CONVERT	=	ft_atoi.c \
					ft_itoa.c \
					ft_tolower.c \
					ft_toupper.c

NAME_IO			=	ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c \
					get_next_line.c

NAME_LIST		=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c

NAME_PREDICATE	=	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_islower.c \
					ft_isprint.c \
					ft_isspace.c \
					ft_isupper.c

NAME_STRING		=	ft_bzero.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_split.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strcpy.c \
					ft_strcspn.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strndup.c \
					ft_strnstr.c \
					ft_strpbrk.c \
					ft_strrchr.c \
					ft_strscpy.c \
					ft_strslen.c \
					ft_strspn.c \
					ft_strtrim.c \
					ft_substr.c

NAME_XLIB		=	xcalloc.c \
					xrealloc.c \
					xsplit.c \
					xstrdup.c \
					xstrjoin.c \
					xstrndup.c \
					xsubstr.c

NAME_PRINTF		=	ft_printf.c \
					ft_dprintf.c \
					utils/print_base.c \
					utils/print_char.c \
					utils/print_decimal.c \
					utils/print_format.c \
					utils/print_hexa.c \
					utils/print_memory.c \
					utils/print_percent.c \
					utils/print_str.c \
					utils/print_unsigned_decimal.c

NAME_LIB_ALLOC	=	allocation.c allocation_utils.c allocation_no_exit.c

SRC_ALLOC		=	$(addprefix ${DIR_ALLOC}, ${NAME_ALLOC})

SRC_BTREE		=	$(addprefix ${DIR_BTREE}, ${NAME_BTREE})

SRC_CONVERT		=	$(addprefix ${DIR_CONVERT}, ${NAME_CONVERT})

SRC_IO			=	$(addprefix ${DIR_IO}, ${NAME_IO})

SRC_LIST		=	$(addprefix ${DIR_LIST}, ${NAME_LIST})

SRC_PREDICATE	=	$(addprefix ${DIR_PREDICATE}, ${NAME_PREDICATE})

SRC_STRING		=	$(addprefix ${DIR_STRING}, ${NAME_STRING})

SRC_XLIB		=	$(addprefix ${DIR_XLIB}, ${NAME_XLIB})

SRC_PRINTF		=	$(addprefix ${DIR_PRINTF}, ${NAME_PRINTF})

SRC_LIB_ALLOC	=	$(addprefix ${DIR_LIB_ALLOC}, ${NAME_LIB_ALLOC})

DIR_SRC			=	src/

SRC_NAME		=	$(SRC_ALLOC) $(SRC_BTREE) $(SRC_CONVERT) $(SRC_IO) $(SRC_LIST) $(SRC_PREDICATE) $(SRC_STRING) $(SRC_XLIB) $(SRC_PRINTF) $(SRC_LIB_ALLOC)

SRC				=	$(addprefix $(DIR_SRC), $(SRC_NAME))

DIR_HEADER		=	inc/

HEADER			=	$(DIR_HEADER)/libft.h

OBJS = ${SRC:%.c=$(DIR_BUILD)/%.o}

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

DIR_BUILD		= build

all :	$(NAME)

$(DIR_BUILD)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) :	${HEADER} ${OBJS}
			ar rcs ${NAME} ${OBJS}

clean :
	rm -rf $(DIR_BUILD)

fclean :	clean
			rm -f ${NAME}

re :	fclean all

.PHONY : all clean fclean re bonus