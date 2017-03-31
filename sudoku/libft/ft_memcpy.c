#include "libft.h" 

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	const unsigned char		*csrc;
	unsigned char			*cdst;
	unsigned char			*final;
	
	csrc = (const unsigned char*)src; 
	cdst = (unsigned char*)dst;
	final = cdst;

	while (len-- > 0)
		*cdst++ = *csrc++;
	return (final);
}
