#include <stdlib.h>
#include <libft.h>

void	*ft_memalloc_c(size_t size)
{
	void			*tmp1;
	unsigned char	*tmp2;

	CHK(size == 0, 0);
	CHK((tmp1 = malloc(size)) == 0, 0);
	tmp2 = (unsigned char*)tmp1;
	while (size--)
	{
		*tmp2 = '0';
		tmp2++;
	}
	return (tmp1);
}