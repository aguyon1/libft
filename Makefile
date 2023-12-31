# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 12:30:05 by aguyon            #+#    #+#              #
#    Updated: 2023/12/07 14:25:56 by aguyon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_ALLOC		=	alloc/

DIR_BTREE		=	btree/

DIR_CONVERT		=	convert/

DIR_IO			=	io/

DIR_LIST		=	list/

DIR_PREDICATE	=	predicate/

DIR_STRING		=	string/

DIR_PRINTF		=	printf/

DIR_LIB_ALLOC	=	liballoc/

DIR_LIB_OPEN	=	libopen/

DIR_LLIST		=	llist/

DIR_NTREE		=	ntree/

DIR_ALGORITHM	=	algorithm/

DIR_VECTOR		=	vector/

NAME_ALLOC		=	ft_calloc.c \
					ft_realloc.c \

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
					ft_isdigit.c \
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
					ft_strcmp.c \
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
					ft_substr.c \
					ft_strappend.c \
					ft_strnappend.c \
					ft_strncat.c \

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

NAME_LIB_OPEN	=	handle_fds_array.c xopen.c xclose.c xclose_all.c

NAME_LLIST		=	llstadd_after.c \
					llstadd_back.c \
					llstadd_before.c \
					llstadd_front.c \
					llstall_of.c \
					llstany_of.c \
					llstclear.c \
					llstdelone.c \
					llstempty.c \
					llstextract.c\
					llstextract_range.c\
					llstextractone.c\
					llstfind_if_not.c\
					llstfind_if.c \
					llstfind_if_reverse.c \
					llstfind.c \
					llstfirst.c \
					llstfold.c \
					llstiter.c \
					llstlast.c \
					llstmap_range.c \
					llstmap.c \
					llstmax.c \
					llstmerge.c \
					llstmerge.c\
					llstmin.c \
					llstnew.c \
					llstnext.c \
					llstnone_of.c \
					llstprev.c \
					llstremove_if.c\
					llstremove_range.c \
					llstremoveone.c \
					llstreplace.c \
					llstsize.c \
					llstsize_range.c \

NAME_NTREE		=	ntree_free.c \
					ntree_new.c \
					ntree_dup.c \
					ntree_print.c

NAME_ALGORITHM	=	ft_bsearch.c \

NAME_VECTOR		=	vector_at.c \
					vector_clear.c \
					vector_delone.c \
					vector_init.c \
					vector_push_back.c \
					vector_resize.c \
					vector_set.c \
					vector_size.c \
					vector_new.c \

SRC_ALLOC		=	$(addprefix ${DIR_ALLOC}, ${NAME_ALLOC})

SRC_BTREE		=	$(addprefix ${DIR_BTREE}, ${NAME_BTREE})

SRC_CONVERT		=	$(addprefix ${DIR_CONVERT}, ${NAME_CONVERT})

SRC_IO			=	$(addprefix ${DIR_IO}, ${NAME_IO})

SRC_LIST		=	$(addprefix ${DIR_LIST}, ${NAME_LIST})

SRC_PREDICATE	=	$(addprefix ${DIR_PREDICATE}, ${NAME_PREDICATE})

SRC_STRING		=	$(addprefix ${DIR_STRING}, ${NAME_STRING})

SRC_PRINTF		=	$(addprefix ${DIR_PRINTF}, ${NAME_PRINTF})

SRC_LIB_ALLOC	=	$(addprefix ${DIR_LIB_ALLOC}, ${NAME_LIB_ALLOC})

SRC_LIB_OPEN	=	$(addprefix ${DIR_LIB_OPEN}, ${NAME_LIB_OPEN})

SRC_LLIST		=	$(addprefix $(DIR_LLIST), $(NAME_LLIST))

SRC_NTREE		=	$(addprefix $(DIR_NTREE), $(NAME_NTREE))

SRC_ALGORITHM	=	$(addprefix $(DIR_ALGORITHM), $(NAME_ALGORITHM))

SRC_VECTOR		=	$(addprefix $(DIR_VECTOR), $(NAME_VECTOR))

DIR_SRC			=	src/

SRC_NAME		=	$(SRC_ALLOC) $(SRC_BTREE) $(SRC_CONVERT) $(SRC_IO) $(SRC_LIST) \
					$(SRC_PREDICATE) $(SRC_STRING) $(SRC_PRINTF) \
					$(SRC_LIB_ALLOC) $(SRC_LIB_OPEN) $(SRC_LLIST) $(SRC_NTREE) \
					$(SRC_ALGORITHM) $(SRC_VECTOR) \

SRC				=	$(addprefix $(DIR_SRC), $(SRC_NAME))

DIR_HEADER		=	inc/

HEADER			=	$(DIR_HEADER)/libft.h $(DIR_HEADER)/alloc.h $(DIR_HEADER)/libopen.h $(DIR_HEADER)/llist.h $(DIR_HEADER)/ntree.h $(DIR_HEADER)/vector.h

OBJS 			=	${SRC:%.c=$(DIR_BUILD)/%.o}

NAME 			=	libft.a

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

DEBUG_FLAGS		= -g3

DIR_BUILD		=	build

all :	$(NAME)

$(DIR_BUILD)/%.o: %.c $(HEADER)
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
