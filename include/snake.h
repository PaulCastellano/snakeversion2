#ifndef SNAKE_H
# define SNAKE_H

//includes lib
# include "mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <time.h>
# include <curses.h>
# include <fcntl.h>

//define keyhook
# define kesc    65307
# define k1      49
# define k2      50
# define k3      51
# define kdown   65364
# define kleft   65361
# define kright  65363
# define kup     65362

//define colors
# define GROUND		0x4d2600
# define RED		0xff0000
# define DARKBLUE	0x003366
# define GREEN		0x00ff00
# define ORANGE		0xffa500
# define LIGHTBLUE	0x00ffff
# define BLACK		0x000000
# define WHITE		0xffffff

//structures for snake
typedef struct	s_color
{
	int			x;
	int			y;
	int			color;
}				t_color;

typedef struct	s_textures
{
	t_color		**text;
}				t_textures;

//functions prototype
void			ft_memalloc(t_textures *ea);
void			ft_read(t_textures *ea, char *str);
#endif