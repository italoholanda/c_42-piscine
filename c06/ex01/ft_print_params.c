#include<unistd.h>

void	ft_putstr(char *str);

int	main (int argc, char *argv[])
{
	if (argv[1])
		ft_putstr(argv[1]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			write (1, "\n", 1);
		else
			write (1, &str[i], 1);
		++i;
	}
	write (1, "\n", 1);
}