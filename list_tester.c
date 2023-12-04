#include "inc/libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct t_point
{
	double x;
	double y;
}	t_point;

void	print_point(t_point *p)
{
	printf("Point -> x : %lf, y : %lf\n", p->x, p->y);
}


void	ft_listprint(t_list *lst, void (*print)(void *))
{
	while (lst != NULL)
	{
		print(lst->content);
		lst = lst->next;
	}
}

t_list	*list_point_new(void)
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	for (size_t	i = 0; i < 16; i++)
	{
		new_node = ft_lstnew(&(t_point){.x = i, .y = i}, sizeof(t_point));
		if (new_node == NULL)
			return (ft_lstdel(&new_list, free), NULL);
		ft_lstadd_front(&new_list, new_node);
	}
	return (new_list);
}

void	add1(t_list *elem)
{
	t_point *const	p = elem->content;

	p->x++;
	p->y++;
}

t_list	*f(t_list *elem)
{
	t_point *const	p = elem->content;
	t_list	*new_elem;

	new_elem = ft_lstnew(&(t_point){.x = p->x * p->y, .y = p->x + p->y}, sizeof(t_point));

	return(new_elem);
}

int	main(void)
{
	t_list	*list;
	t_list	*list2;

	list = list_point_new();
	if (list == NULL)
		return (EXIT_FAILURE);
	puts("AFFICHAGE LIST1 AVANT LSTITER");
	ft_listprint(list, (void *)print_point);
	puts("");
	ft_lstiter(list, add1);
	puts("AFFICHAGE LIST1 APRES LSTITER");
	ft_listprint(list, (void *)print_point);
	puts("");
	list2 = ft_lstmap(list, f, free);
	puts("AFFICHAGE LIST2");
	ft_listprint(list2, (void *)print_point);
	puts("");
	ft_lstdel(&list, free);
	ft_lstdel(&list2, free);
	return (EXIT_SUCCESS);
}
