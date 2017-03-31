#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void			*tmp1;
	unsigned char	*tmp2;

	CHK(size == 0, 0);
	CHK((tmp1 = malloc(size)) == 0, 0);
	tmp2 = (unsigned char*)tmp1;
	while (size--)
		*tmp2++ = 0;
	return (tmp1);
}
