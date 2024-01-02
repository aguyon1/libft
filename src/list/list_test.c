#include "../../inc/list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int n;
	struct list_head list;
}	Node;

typedef struct List
{
	struct list_head head;
}	List;

int	main(void)
{
	List	list1;
	List	list2;
	Node	*node;
	Node	*temp;

	init_list_head(&list1.head);
	init_list_head(&list2.head);
	for (int i = 0; i < 20; i++)
	{
		node = malloc(sizeof(*node));
		node->n = i;
		list_add_tail(&node->list, &list1.head);
	}
	for (int i = 20; i < 40; i++)
	{
		node = malloc(sizeof(*node));
		node->n = i;
		list_add_tail(&node->list, &list2.head);
	}
	list_splice(&list1.head, &list2.head);
	struct list_head *current;
	list_for_each(current, &list2.head)
	{
		node = list_entry(current, Node, list);
		if (node->n == 20)
			break ;
	}
	list_cut(&list1.head, &list2.head, current);
	puts("LIST1");
	list_for_each_entry(node, &list1.head, list)
		printf("%d ", node->n);
	puts("");
	puts("LIST2");
	list_for_each_entry(node, &list2.head, list)
		printf("%d ", node->n);
	puts("");
	list_for_each_entry_safe(node, temp, &list1.head, list)
		free(node);
	list_for_each_entry_safe(node, temp, &list2.head, list)
		free(node);
	return (0);
}
