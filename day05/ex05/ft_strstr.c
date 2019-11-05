char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	
	i = 0;
	if (!(to_find[i]))
		return(str);	
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i++;
			j++;

		}
		if (to_find[j] == '\0')
			return(str + i - j);
		i++;
	}
	return("(null)");
}
