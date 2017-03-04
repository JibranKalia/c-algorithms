#include "libft.h" 

int		ft_isxdigit(int c)
{
	return (ft_isdigit(c) || (c >= 'a' && c <= 'f') 
			|| (c >= 'A' && c <= 'F') ? 1 : 0);
}
