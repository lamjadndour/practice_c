int	ft_iterative_power(int nb, int power)
{
	int i;
	int stop;
	
	stop = 0;
	i = nb;
	if (power < 0 || nb < 0)
		return(0);
	if (power == 0)
		return (1);
	while(++stop < power)
		nb = nb * i;
	return(nb);
}
