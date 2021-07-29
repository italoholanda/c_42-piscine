void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_ab;
	int	mod_ab;

	div_ab = *a / *b;
	mod_ab = *a % *b;
	*a = div_ab;
	*b = mod_ab;
}
