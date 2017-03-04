#include "libft.h"

int		ft_strcmp(const char *src1, const char *src2)
{
	while (*src1 == *src2)
	{
		if (*src1 == '\0')
			return (0);
		src1++;
		src2++;
	}
	return ((unsigned char)*src1 - (unsigned char) *src2);
}
