#include "inc/libft.h"

void	destructor(void) __attribute__((destructor));

void	destructor(void)
{
	xclose_all();
}

// int main(void)
// {
// 	int	fd = xopen("./test", O_RDONLY);
// 	char *line;

// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		ft_printf("%s", line);
// 		if (line == NULL)
// 			break ;
// 		free(line);
// 		line = NULL;
// 	}
// }

int main(void)
{
	int	fd = xopen("./test", O_RDONLY);
	char	*line;

	ft_printf("%i\n", BUFFER_SIZE);
	for (int i = 0; i < 5; i++)
	{
		line = get_next_line(fd);
		ft_printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
		line = NULL;
	}
}
