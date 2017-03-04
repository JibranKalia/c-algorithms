#include "libft.h"
#include <stdlib.h> 

char	*ft_strndup(const char *src, size_t len)
{
	char		*dst;
	char		*cdst;

	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	cdst = dst; 
	len++;
	while (--len > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (cdst);
}

