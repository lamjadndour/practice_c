int ft_sqrt(int nb)
{
	int i;
	
	i = 0;
	if (nb <= 0)
		return (0);
	while (++i < nb)
	{
		if(nb == i * i)
			return (i);
		else if (i == (nb / 2) || i == (nb / 3))
			return (0);
	}
	return (0);
}
