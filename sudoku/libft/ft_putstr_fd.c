#include "libft.h" 

void	ft_putstr_fd(char const *src, int fd)
{
	while (*src)
	{
		ft_putchar_fd(*src, fd);
		src++;
	}
}
