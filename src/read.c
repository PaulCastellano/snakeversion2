#include "../include/snake.h"

void	ft_introduce(t_textures *ea, char *str, int i)
{
	int j;

	j = -1;
	while(str[++j] != '\n')
		if (str[j] == '0')
			ea->text[i][j].color = GROUND;
		else if (str[j] == '1')
			ea->text[i][j].color = RED;
		else if (str[j] == '2')
			ea->text[i][j].color = DARKBLUE;
		else if (str[j] == '3')
			ea->text[i][j].color = GREEN;
		else if (str[j] == '4')
			ea->text[i][j].color = ORANGE;
		else if (str[j] == '5')
			ea->text[i][j].color = LIGHTBLUE;
		else if (str[j] == '6')
			ea->text[i][j].color = BLACK;
		else if (str[j] == '7')
			ea->text[i][j].color = WHITE;
}

void	ft_read(t_textures *ea, char *str)
{
	int		fd;
	char	s[26];
	int		i;

	fd = open(str, O_RDONLY);
	ft_memalloc(ea);
	i = -1;
	while(read(fd, s, 25) != 0)
	{
		printf("%s\n", s);
		ft_introduce(ea, s, ++i);
		//printf("%d\n", i);
	}
	printf("1\n");
}