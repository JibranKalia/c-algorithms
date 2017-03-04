#include "libft.h"

#include "stdio.h" 

void	*ft_memccpy(void *dst, const void *src, int src_c, size_t len)
{
	const unsigned char	*csrc;
	unsigned char		*cdst;
	unsigned char 		ch;

	csrc = (const unsigned char*)src;
	cdst = (unsigned char*)dst;
	ch = (unsigned char)src_c;

	while (len-- > 0)
	{
		if((*cdst++ = *csrc++) == ch)
			return (cdst);
	}
	return (0);
}
