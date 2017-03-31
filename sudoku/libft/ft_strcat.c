char	*ft_strcat(char *dst, const char *src)
{
	char	*orig;

	orig = dst;
	while (*dst)
		dst++;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';

	return (orig);
}
