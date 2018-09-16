#include "../include/snake.h"

int main()
{
	t_textures	ea;
	void	*win;
	void	*ptr;

	ptr = mlx_init();
	win = mlx_new_window(ptr, 600, 600, "SNAKE");
	ft_read(&ea, "textures/body1");
	int i;
	int j;
	i = -1;
	while (++i < 24)
	{
		j = -1;
		while (++j < 24)
		{
			printf("%d\n", ea.text[i][j].color);
			mlx_pixel_put(ptr, win, j, i, ea.text[i][j].color);
		}
	}
	mlx_loop(ptr);
	return (0);
}