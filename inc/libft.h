/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:00:08 by aguyon            #+#    #+#             */
/*   Updated: 2023/12/04 12:30:52 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdbool.h>
# include <stdarg.h>
# include "algorithm.h"
# include "types.h"
# include "libopen.h"
# include "alloc.h"
# include "llist.h"
# include "ntree.h"
# include "vector.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_realloc(void *ptr, size_t original_size, size_t size);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int ft);

/* STRING */
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	**ft_split(char const *s, const char *sep);
char	*ft_strappend(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
size_t	ft_strcspn(const char *s, const char *reject);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnappend(char *dest, const char *src, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strpbrk(const char *s, const char *accept);
char	*ft_strrchr(const char *s, int c);
char	**ft_strscpy(char **strs, size_t len);
size_t	ft_strslen(char **strs);
size_t	ft_strspn(const char *s, const char *accept);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

//Partie Bonus
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//Get_next_line
char	*get_next_line(int fd);

//Tree
typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}	t_btree;

//Struct pour btree_apply_be_level
typedef struct s_tree_level_info
{
	int	current_level;
	int	real_level;
}	t_tree_level_info;

t_btree	*btree_create_node(void *item);
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void	btree_apply_infix(t_btree *root, void (*applyf)(void *));
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void	btree_insert_data(t_btree **root, void *item,
			int (*cmpf)(void *, void *));
void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *));
int		btree_level_count(t_btree *root);
void	btree_apply_by_level(t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first));

/*	xlib	*/

void	*xcalloc(size_t nmemb, size_t size);
void	*xrealloc(void *ptr, size_t original_size, size_t size);
char	**xsplit(const char *str, const char *sep);
char	*xstrdup(const char *s);
char	*xstrjoin(char const *s1, char const *s2);
char	*xstrndup(const char *s, size_t n);
char	*xsubstr(char const *s, unsigned int start, size_t len);
char	*xstrappend(char *dest, const char *src);
char	*xstrnappend(char *dest, const char *src, size_t n);
char	*xget_next_line(int fd);

/* PRINTF */
int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);
int		print_format(int fd, const char *format, va_list ap);
int		print_base(int fd, __int128_t nb, unsigned int base);
int		print_char(int fd, va_list ap);
int		print_decimal(int fd, va_list ap);
int		print_hexa_lower(int fd, va_list ap);
int		print_hexa_upper(int fd, va_list ap);
int		print_memory(int fd, va_list ap);
int		print_percent(int fd, va_list ap);
int		print_str(int fd, va_list ap);
int		print_unsigned_decimal(int fd, va_list ap);

#endif
