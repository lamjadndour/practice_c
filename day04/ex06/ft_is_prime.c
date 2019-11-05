int ft_is_prime(int nb)
{
	int a;

	a = 1;
	if (nb < 2)
		return (0);
	else
	{	
		while (++a <= 100000000)
			{
				if (nb == a)
					return (1);
				else if (nb % a == 0)
					return (0);
			}
	}
	return (1);
}
