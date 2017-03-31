#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t len)
{
	char	*orig;
	orig = dst;
	while (*dst)
		dst++;
	len++;
	while (*src && --len > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (orig);
}
