void	ft_putchar(char c);

int main (int argc, char **argv)
{
	int i;
	
	i = -1;
	if (argc == 1)
	{
		while (argv[0][++i])
			ft_putchar(argv[0][i]);
		ft_putchar ('\n');
	}
	return (0);
}
