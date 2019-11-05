void	ft_putchar(char c);
void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				if(a < 7)
					ft_putchar(',');
				if(a < 7)
					ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');	
}
