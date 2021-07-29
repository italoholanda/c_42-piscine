int	str_counter(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		++i;
		++str;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	cont;

	cont = str_counter(dest);
	while (*src != '\0')
	{
		dest[cont] = *src;
		++cont;
		++src;
	}
	dest[cont] = '\0';
	return (dest);
}
