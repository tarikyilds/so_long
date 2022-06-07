#include "so_long.h"

char *get_map(char *str)
{
	int fd;
	char a[200];

	fd = open(str, O_RDONLY);
	return (get_next_line(fd));
}