int	ft_atoi(char *str)
{
	int i;
	int a;
	int j;
	
	i = 0;
	a = 0;
	j = 1;
	while ((str[i] >= 7 && str[i] <= 12) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = -1;
		i++;		
	}
	while ((str[i] >= '0' && str [i] <= '9') && (str[i] !='\0'))
	{
		a = 10 * a + (str[i] - 48);
		i++;
	}
	return (a * j);
}
