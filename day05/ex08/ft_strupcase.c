char	*ft_strupcase(char *str)
{
	int i;
	
	while (str[i])
	{
		if(str[i] >= 'a' && str [i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
