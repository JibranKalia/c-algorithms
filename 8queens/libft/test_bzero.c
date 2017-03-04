#include <string.h> 
#include <stdio.h> 
#include "libft.h"
static int		ft_strcmplen(const char *src1, const char *src2, int n)
{
	while (*src1 == *src2 && n-- > 0)
	{
		src1++;
		src2++;
	}
	return ((unsigned char)*src1 - (unsigned char)*src2);
}

int		main(void)
{
	char 	str1[25] = "How is this?";
	char 	str2[25] = "How is this?";
	int		len = 10;
	bzero(str1, len);
	ft_bzero(str2, len);
	
	if (ft_strcmplen(str1, str2, len) == 0)
		printf("\033[0;32mBzero Passed\n\033[0m");
	else
		printf("Bzero FAILED\n");
	return (0);
}
