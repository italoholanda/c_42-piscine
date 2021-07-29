#include <unistd.h>

const char	g_top_vertex = 'A';
const char	g_bottom_vertex = 'C';
const char	g_line = 'B';
const char	g_space = ' ';
void		ft_putchar(char c);

void	write_line(char edge, char fill, int width)
{
	int		counter;
	char	current_char;

	counter = 1;
	while (counter <= width)
	{
		current_char = fill;
		if (counter == 1 || counter == width)
			current_char = edge;
		ft_putchar(current_char);
		counter++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	counter;

	counter = 1;
	while (counter <= y)
	{
		if (counter == 1)
		{
			write_line (g_top_vertex, g_line, x);
		}
		else if (counter == y)
		{
			write_line (g_bottom_vertex, g_line, x);
		}
		else
		{
			write_line (g_line, g_space, x);
		}
		counter++;
	}
}
