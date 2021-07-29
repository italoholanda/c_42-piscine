#include <unistd.h>

void	print_this(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		print_this('-');
		print_this('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		print_this('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		print_this(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
