void	ft_ultimate_div_mod(int *a, int *b)
{
	int u;
	u = *a / *b;
	*b = *a % *b;
	*a = u;
}
