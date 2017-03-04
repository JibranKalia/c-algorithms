#include "libft.h"
#include <unistd.h> 

void	ft_putendl_fd(char const *src, int fd)
{
	while (*src)
		write(fd, src++, 1);
	ft_putchar_fd('\n', fd);
}
