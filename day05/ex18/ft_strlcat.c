int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (dest[i])
		i++;
	while (++j < size && src[j])
		dest[i + j] = src[j];
	dest[i] = '\0';
	return (ft_strlen(src) + i);
}
