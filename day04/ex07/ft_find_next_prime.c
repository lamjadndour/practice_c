int ft_find_next_prime(int nb)
{
	int a;

	a = 1;
	if(nb <= 2)
		return(2);
	else
	{	
		while (++a <= 100000000)
		{
			if (nb == a)
				return (nb);
			else if (nb % a == 0)
				return (ft_find_next_prime(nb + 1));			
		}
	}
	return (nb);
}
