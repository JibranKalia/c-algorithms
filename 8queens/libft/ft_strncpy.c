#include "libft.h"

char	*ft_strncpy(char* dst, const char* src, size_t len)
{
	char	*cdst;
	cdst = dst;
	while (*src && len > 0)
	{
		*cdst++ = *src++;
		len--;
	}
	while (len-- > 0)
		*cdst++ = '\0';
	return (dst);
}
