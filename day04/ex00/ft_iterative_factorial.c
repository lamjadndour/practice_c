int	ft_iterative_factorial(int nb)
{
	int i;
	int stop;
	
	i = 1;
	stop = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (i < stop)
	{
		nb = nb * i;
		i++;
	}
	return (nb);
}
