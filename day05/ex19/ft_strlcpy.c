int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size && src[i])
		dest[i++] = src[i];
	while(i < size)
		dest[i++] = '\0';
	return (ft_strlen(src));

}
