#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb2(void)
{
	int a;
	int b;

	a = -01;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_putchar((a / 10) + 48);
			ft_putchar((a % 10) + 48);
			ft_putchar(' ');
			ft_putchar((b / 10) + 48);
			ft_putchar((b % 10) + 48);
			if (a < 98)
				ft_putchar(',');
			if (a < 98)
				ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}
int	main()
{
	ft_putchar('H');
	ft_putchar('\n');
	ft_print_comb2();
}
