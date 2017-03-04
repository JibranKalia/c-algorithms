#include "libft.h"
#include <unistd.h> 

void	ft_putstr(char const *src)
{
	while (*src)
		write(1, src++, 1);
}
