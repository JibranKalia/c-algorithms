#include "libft.h"
#include <stdio.h> 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	orig;
	size_t	len_final;
	
	orig = size + ft_strlen(src);
	len_final = 0;
	while(*dst && size > 0)
	{
		dst++;
		size--;
		len_final++;
	}
	if (size < 1)
		return (orig);
	size--;
	while (*src && size > 0)
	{
		*dst = *src;
		src++;
		dst++;
		len_final++;
		size--;
	}
	while (*src++)
		len_final++;
	*dst = '\0';
	return (len_final);
}
