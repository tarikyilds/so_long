#ifndef SOLONG_H
# define SOLONG_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../mlx/mlx.h"
#include "../ft_printfa/ft_printf.h"
#include "../get_next_linea/get_next_line.h"

typedef struct s_data
{
	void	*mlx;
	void	*mlx_win;
	void	*img;
	int		img_x;
	int		img_y;
	int		position_x;
	int		position_y;
}				t_data;

char	*get_map(char *str);
#endif