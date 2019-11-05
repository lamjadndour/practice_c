int	ft_atoi(char *str)
{
	int i;
	int a;
	int n;
	
	i = 0;
	a = 0;
	n = 1;
	while ((str[i] >= 7 && str[i] <= 12) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		a = a * 10 + str[i] - 48;
		i++;
	}
	return (n * a);
}
