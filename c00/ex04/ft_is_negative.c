#include<unistd.h>

void	ft_is_negative(int n)
{
	const char	positive = 'P';
	const char	negatitive = 'N';

	if (n < 0)
	{
		write(1, &negatitive, 1);
	}
	else
	{
		write(1, &positive, 1);
	}
}