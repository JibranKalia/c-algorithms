#include "libft.h"

int		ft_strncmp(const char *src1, const char *src2, size_t len)
{
	len++;
	while ((*src1 == *src2) && --len > 0)
	{
		if (*src1 == '\0')
			return (0);
		src1++;
		src2++;
	}
	return ((unsigned char)*src1 - (unsigned char) *src2);
}
