#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tmp;
	char	*tmp_orig;

	size++;
	tmp = (char*)malloc(sizeof(char) * size);
	if (!tmp)
		return (NULL);
	tmp_orig = tmp;
	while (size--)
		*tmp++ = 0;
	return (tmp_orig);
}
