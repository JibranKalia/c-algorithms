#include "libft.h"

char	*ft_strstr(const char *src, const char* to_find)
{
	int			len;

	if (!*to_find)
		return ((char*)src);
	while(*src)
	{
		len = 0;
		while (*src == *to_find)
		{
			to_find++;
			src++;
			len++;
			if (!*to_find)
				return ((char *)(src - len));
		}
		src = src - len;
		to_find = to_find - len;
		src++;
	}
	return (NULL);
}
