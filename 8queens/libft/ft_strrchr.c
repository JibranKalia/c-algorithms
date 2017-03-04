#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char	to_find;
	char	*csrc;

	csrc = (char *)src;
	to_find = (char)c;
	while(*csrc != '\0')
		csrc++;
	if (to_find == '\0')
		return (csrc);
	while (csrc != src && *csrc != to_find)
		csrc--;
	if (*csrc == to_find)
		return(csrc);
	return (NULL);
}
