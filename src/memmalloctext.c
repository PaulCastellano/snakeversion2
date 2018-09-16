#include "../include/snake.h"

void	ft_memalloc(t_textures *ea)
{
	int i;

	ea->text = (t_color**)malloc(sizeof(t_color*) * 24);
	i = -1;
	while (++i < 24)
		ea->text[i] = (t_color*)malloc(sizeof(t_color) * 24);
}