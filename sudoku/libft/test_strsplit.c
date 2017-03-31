#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

//extern int g_malloc_inject;

int		str_test1(void)
{
	char *s = "      split       this for   me  !       ";
    char **r = ft_strsplit(s, ' ');	
    char **ret = strsplit(s, ' ');	

    while (*r)
    {
        if (strcmp(*r, *ret))
        {
			printf("Str_Split Test1: FAIL\n");
            return (1);
        }
        r++;
        ret++;
    }
	printf("Everything Fine\n");
	return (0);
}

int		str_test2(void)
{
	char *s = "split  ||this|for|me|||||!|";
	int i = 0;
	char **r = ft_strsplit(s, '|');
	char **ret = strsplit(s, '|');

	while (r[i])
	{
		if (strcmp(r[i], *ret))
		{
			printf("Str_Split Test2: FAIL\n");
			return (1);
		}
		i++;
		ret++;
	}
	return (0);
}


int		main(void)
{
	char 	**ret;
	int 	i = 0;
	int 	flag = 0;

	//g_malloc_inject = 2;

	char *s = "      split       this for   me  !       ";
	ret = ft_strsplit(s, ' ');
	CHK1(ret == 0, printf("This Failed\n"), 0);

	if (str_test1() == 1)
		flag = 1;
	if (str_test2() == 1)
		flag = 1;
	if (flag == 0)
		printf("Str_Split PASS\n");
    return (0);
}
