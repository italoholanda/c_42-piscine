char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_upper;

	i = 0;
	is_upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (is_upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!is_upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			is_upper = 0;
		}
		else
		{
			is_upper = 1;
		}
		++i;
	}
	return (str);
}
