#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	strlcat_test1(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[0xF00] = "there is no stars in the sky";
    char buff2[0xF00] = "there is no stars in the sky";
    size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
    size_t r1 = __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    size_t r2 = ft_strlcat(buff2, str, max);

    if (r1 != r2)
	{
		printf("Test1A: FAIL\n");
		printf("r1 = 		%lu\n", r1);
		printf("r2 = 		%lu\n", r2);
		printf("Expected: 	%s\n", buff1);
		printf("Printed:	%s\n", buff2);
		printf("-----------------------------------------------------------------\n");
		return (1);
	}
    char s1[4] = "";
    char s2[4] = "";
    r1 = __builtin___strlcat_chk (s1, "thx to ntoniolo for this test !", 4, __builtin_object_size (s1, 2 > 1 ? 1 : 0));
    r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
    if (r1 != r2)
	{
        printf("Test1B: FAIL\n");
		printf("-----------------------------------------------------------------\n");
		printf("r1 = 		%lu\n", r1);
		printf("r2 = 		%lu\n", r2);
		printf("Expected: 	%s\n", buff1);
		printf("Printed:	%s\n", buff2);
		printf("-----------------------------------------------------------------\n");
		return (1);
	}
	return (0);
}

int	strlcat_test2(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[0xF00] = "there is no stars in the sky";
    char buff2[0xF00] = "there is no stars in the sky";
    size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

    __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    ft_strlcat(buff2, str, max);
    if (!strcmp(buff1, buff2))
		return (0);
    printf("Test2: FAIL\n");
	printf("-----------------------------------------------------------------\n");
	printf("Expected: 	%s\n", buff1);
	printf("Printed:	%s\n", buff2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int	strlcat_test3(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[0xF00] = "there is no stars in the sky";
    char buff2[0xF00] = "there is no stars in the sky";
    size_t max = 0;

    __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    ft_strlcat(buff2, str, max);
    if (!strcmp(buff1, buff2))
		return (0);
	printf("Test3: FAIL\n");
	printf("-----------------------------------------------------------------\n");
	printf("Expected: 	%s\n", buff1);
	printf("Printed:	%s\n", buff2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int	strlcat_test4(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[0xF00] = "there is no stars in the sky";
    char buff2[0xF00] = "there is no stars in the sky";
    size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");

    __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    ft_strlcat(buff2, str, max);
    if (!strcmp(buff1, buff2))
		return (0);
	printf("Test4: FAIL\n");
	printf("-----------------------------------------------------------------\n");
	printf("Expected: 	%s\n", buff1);
	printf("Printed:	%s\n", buff2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int	strlcat_test5(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[0xF00] = "there is no stars in the sky";
    char buff2[0xF00] = "there is no stars in the sky";
    size_t max = 1000;

    __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    ft_strlcat(buff2, str, max);
    if (!strcmp(buff1, buff2))
		return (0);
	printf("Test5: FAIL\n");
	printf("-----------------------------------------------------------------\n");
	printf("Expected: 	%s\n", buff1);
	printf("Printed:	%s\n", buff2);
	printf("-----------------------------------------------------------------\n");
	return (1);

}

int	strlcat_test6(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[0xF00] = "";
    char buff2[0xF00] = "";
    size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 1;

    __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    ft_strlcat(buff2, str, max);
    if (!strcmp(buff1, buff2))
	 return (0);
	printf("Test6: FAIL\n");
	printf("-----------------------------------------------------------------\n");
	printf("Expected: 	%s\n", buff1);
	printf("Printed:	%s\n", buff2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}


int	strlcat_test7(void)
{
	    char *str = "n\0AA";
    char buff1[0xF00] = "\0AAAAAAAAAAAAAAAA";
    char buff2[0xF00] = "\0AAAAAAAAAAAAAAAA";
    size_t max = 10;

    __builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    ft_strlcat(buff2, str, max);
    if (!strcmp(buff1, buff2))
	{
		return (0);
	}
	printf("Test7: FAIL\n");
	printf("-----------------------------------------------------------------\n");
	printf("Expected: 	%s\n", buff1);
	printf("Printed:	%s\n", buff2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int	strlcat_test8(void)
{
	char *src = "aaa";
    char dst1[20];
    char dst2[20];
    int ret1;
    int ret2;

    __builtin___memset_chk (dst1, 'B', sizeof(dst1), __builtin_object_size (dst1, 0));
    __builtin___memset_chk (dst2, 'B', sizeof(dst2), __builtin_object_size (dst2, 0));
    __builtin___strlcat_chk (dst1, src, 20, __builtin_object_size (dst1, 2 > 1 ? 1 : 0));
    __builtin___strlcat_chk (dst1, src, 20, __builtin_object_size (dst1, 2 > 1 ? 1 : 0));
    ret1 = __builtin___strlcat_chk (dst1, src, 20, __builtin_object_size (dst1, 2 > 1 ? 1 : 0));
    ft_strlcat(dst2, src, 20);
    ft_strlcat(dst2, src, 20);
    ret2 = ft_strlcat(dst2, src, 20);
    if (ret1 == ret2)
	{
		return (0);
	}
	printf("Test8: FAIL\n");
	printf("-----------------------------------------------------------------\n");
	printf("Expected: 	%d\n", ret1);
	printf("Printed:	%d\n", ret2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		main (void)
{
	int	err_flag = 0;
	if (strlcat_test1() == 1)
		err_flag = 1;
	if (strlcat_test2() == 1)
		err_flag = 1;
	if (strlcat_test3() == 1)
		err_flag = 1;
	if (strlcat_test4() == 1)
		err_flag = 1;
	if (strlcat_test5() == 1)
		err_flag = 1;
	if (strlcat_test6() == 1)
		err_flag = 1;
	if (strlcat_test7() == 1)
		err_flag = 1;
	if (strlcat_test8() == 1)
		err_flag = 1;

	if (err_flag == 0)
		printf("\033[0;32mSTRLCAT test PASS\033[03m\n");

	return (0);
}
