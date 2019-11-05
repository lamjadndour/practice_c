void	ft_putchar(char c);
int main (int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	while (i >= 1)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i--;
	}
}
