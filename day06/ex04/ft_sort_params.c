void	ft_putchar(char c);

void 	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])	
		ft_putchar(str[i++]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = -1;
	while(s1[++i])
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return(s1[i] - s2[i]);
	}
	return(s1[i] - s2[i]);
}

int	main (int argc, char **argv)
{
	int 		i;
	int 		a;
        char 		*u;
	
	a = 1;
	while (a)
	{
		a = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if(ft_strcmp(argv[i],argv[i + 1]) > 0)
			{
				u = argv[i];
        			argv[i] = argv[i + 1];
        			argv[i + 1] = u;
				a = 1;
			}
	  	}
	}
	i = 1;
	while(argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
