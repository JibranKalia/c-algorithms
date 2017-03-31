#include "libft.h" 
#include <stdlib.h> 

void	*ft_memmove(void *dst, const void* src, size_t len)
{
    const unsigned char	*csrc;
    unsigned char 		*cdst;
	unsigned char		*final;
    
    csrc = (const unsigned char*)src;
    cdst = (unsigned char*)dst;
	final = cdst;
	if (cdst > csrc)
	{
		csrc = csrc + len - 1;
		cdst = cdst + len - 1;
	    while (len-- > 0)
	        *cdst-- = *csrc--;
	}
	else
	{
		while (len-- > 0)
			*cdst++ = *csrc++;
	}
	return (final);
}
