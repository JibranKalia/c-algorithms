void	ft_striteri(char *src, void (*f)(unsigned int, char *))
{
	int		i;
	i = 0;
	while (*src && *f != 0)
		f(i++, &*src++);
}
