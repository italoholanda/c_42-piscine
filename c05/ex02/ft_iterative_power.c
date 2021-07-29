int	ft_iterative_power(int nb, int power)
{
	int i;
	int temp;

	if (power == 0)
		return (1);
	else if (power < 0)
	{
		return (0);
	}
	else if (power == 1)
		return (nb);
	else
		i = power;
		temp = nb;
		while (i > 1)
		{
			temp = nb * temp;
			--i;
		}
	return (temp);
}