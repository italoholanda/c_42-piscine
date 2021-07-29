#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter <= 97)
	{
		write(1, &letter, 1);
		letter++;
	}
}

void	main(void)
{
	ft_print_alphabet(void)
}
