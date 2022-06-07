#include "so_long.h"

int	check_map_type(char *argc2)
{
	size_t size;

	if (argc2[0] == '\0' || !argc2)
		return (0);
	size = ft_strlen_lib(argc2) - 1;
	if (argc2[size] == 'r' && argc2[size - 1] == 'e' && argc2[size - 2] == 'b' && argc2[size - 3] == '.')
		return (1);
	else
		map_type_error();
	return (0);
}

char *get_map(t_data *item, char *str)
{
	int fd;
	char a[200];

	fd = open(str, O_RDONLY);
	return (get_next_line(fd));
}