int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	response;

	i = 0;
	while (str[i] <= ' ' || str[i] > '~')
		i++;
	signal = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	response = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		response = (str[i] - 48) + (response * 10);
		i++;
	}
	return (response * signal);
}
