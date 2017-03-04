#include <string.h> 

void	*ft_memset(void *src, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*msrc;

	ch = (unsigned char)c;
	msrc = (unsigned char*)src;
	while (len-- > 0)
		*msrc++ = ch;
	return (src);
}
