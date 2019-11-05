char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else if ((str[i] == 32) && (str[i + 2] >= 'a' && str[i + 2] <= 'z'))
				str[i + 1] = str[i + 1] - 32;
		else if ((str[i] == '+' || str[i] == '-') && (str[i + 2] >= 'a' && str[i + 2] <= 'z'))	
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
