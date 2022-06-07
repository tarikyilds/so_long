#include "so_long.h"
/*
typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void first_training()
{
	void	*mlx;
	void	*mlx_win;
	int		index;
	t_data	img;

	index = 0;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 960, 960, "Hello world!");
	img.img = mlx_new_image(mlx, 450, 450);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	
	while (index <= 100)
	{
		my_mlx_pixel_put(&img, index + (index * 2), index, 0x00FF0000);
		mlx_put_image_to_window(mlx, mlx_win, img.img, index, index);
		index++;
	}
	mlx_loop(mlx);
}*/
/*
void resim_bas(){
	t_data	item;
	void	*img;
	char	*path = "./img/player.xpm";
	int		width = 64;
	int		height = 64;

	item.mlx = mlx_init();
	item.mlx_win = mlx_new_window(item.mlx, 1920, 1080, "Ottoman Empire - Soldier!!!");
	img = mlx_xpm_file_to_image(item.mlx, path, &width, &height);
	mlx_put_image_to_window(item.mlx, item.mlx_win, img, 150, 150);
	mlx_loop(item.mlx);
}*/

/*int	key_event(int keycode, t_data *data)
{
	mlx_clear_window(data->mlx, data->mlx_win);
	if (keycode == 2) // d harfidir.
	{
		data->position_x += 64;
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, data->position_x, data->position_y);
	}
	if (keycode == 0) // a harfidir.
	{
		data->position_x -= 64;
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, data->position_x, data->position_y);
	}
	if (keycode == 87) // a harfidir.
	{
		data->position_x -= 64;
		mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, data->position_x, data->position_y);
	}
	ft_printf("%d\n", keycode);
	return (0);
}

int	main(void)
{
	t_data *data;

	data = (t_data *) calloc(sizeof(t_data), 1);
	data->img = (void *) malloc(sizeof(void));
	data->mlx = mlx_init();
	data->img = mlx_xpm_file_to_image(data->mlx, "./img/player.xpm", &data->img_x, &data->img_y);
	data->mlx_win = mlx_new_window(data->mlx, 600, 600, "First Try!");
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img, data->position_x, data->position_y);
	mlx_hook(data->mlx_win, 2, 1L << 0, key_event, data);
	mlx_loop(data->mlx);
}*/


int	main(int arg, char **argc)
{
	t_data	*item;
	if (arg == 2)
	{
		item = (t_data *) ft_calloc(sizeof(t_data), 1);
		if (!item)
			exit(1);
		if (check_map_type(argc[1]))
			get_map(item, argc[1]);
		else
			map_type_error();
	}
	else
		ft_printf("Hata!\nYanlis Arguman Verildi.");
	exit(1);
}