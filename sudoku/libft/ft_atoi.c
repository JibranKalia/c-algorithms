#include "libft.h"

int		ft_atoi(const char *str)
{
	int					neg_flag;
	unsigned long long	res;
	int					i;

	i = 0;
	res = 0;
	while(ft_isspace(*str) == 1)
		str++;
	neg_flag= (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;

	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (i > 12)
		return ((neg_flag == 1) ? -1 : 0);
	return (neg_flag * res);
}
