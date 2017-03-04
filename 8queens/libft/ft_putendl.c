#include "libft.h"
#include <unistd.h> 

void	ft_putendl(char const *src)
{
	while (*src)
		write(1, src++, 1);
	ft_putchar('\n');
}
