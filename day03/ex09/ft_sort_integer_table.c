void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int u;
	int j;
	
	u = 0;
	i = 0;
	j = 0;
	while (j < (size + 1))
	{
		i = 0;	
		while (i < size)
		{
			if(tab[i] > tab[i + 1])
			{
				u = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = u;
				j = 0;
			}
			i++;
		}
		j++;
	}
}
