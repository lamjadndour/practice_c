char	*ft_strrev(char *str)
{
	int 	i;
	int 	y;
	char	u; 
	
	i = 0;
	y = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i > y)
	{
		u = str[y];
		str[y] = str[i];
		str[i] = u;
		i--;
		y++;
	}
	return (str);
}
