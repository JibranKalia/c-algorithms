#include <stdio.h>
#include <stdlib.h> 
#include <wchar.h>
#include "libft.h"

int		test_strstr1()
{
	char *src = "aaabbbaaabbb";
    char *d1 = strstr(src, "abbaaab");
    char *d2 = ft_strstr(src, "abbaaab");

    if (d1 == d2)
		return(0);
	printf("Test1: \n");
	printf("Expected: %s\n", d1);
	printf("Expected: %s\n", d2);
	return(1);
}

int		test_strstr2()
{
	char *src = "the ca cake is a lie !\0I'm hidden lol\r\n";
    char *d1 = strstr(src, "cake");
    char *d2 = ft_strstr(src, "cake");

    if (d1 == d2)
		return (0);
	printf("Test2: \n");
	printf("Expected: %s\n", d1);
	printf("Expected: %s\n", d2);
	return (1);
}

int		test_strstr3()
{
	char *s2 = "FF";
    char *s1 = "see F your F return FF now FF";
    char *i1 = strstr(s1, s2);
    char *i2 = ft_strstr(s1, s2);

    if (i1 == i2)
		return (0);
	printf("Expected: %s\n", i1);
	printf("Printed: %s\n", i2);
    return (1);
}

int		test_strstr4()
{
	char *s1 = "";
    char *s2 = "";
    char *i1 = strstr(s1, s2);
    char *i2 = ft_strstr(s1, s2);

    if (i1 == i2)
		return (0);

	printf("Test4: \n");
	printf("Expected: %s\n", i1);
	printf("Printed: %s\n", i2);
    return (1);
}

int		test_strstr5()
{
	char *s1 = "MZIRIBMZIRIBMZP";
    char *s2 = "MZIRIBMZP";
    char *i1 = strstr(s1, s2);
    char *i2 = ft_strstr(s1, s2);

    if (i1 == i2)
		return (0);
	printf("Test5: \n");
	printf("Expected: %s\n", i1);
	printf("Printed: %s\n", i2);
    return (1);
}

int		test_strchr1()
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
    char *d1 = strchr(src, 't');
    char *d2 = ft_strchr(src, 't');

    if (d1 == d2)
		return (0);
	return (1);
}

int		test_strchr2()
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
    char *d1 = strchr(src, 'x');
    char *d2 = ft_strchr(src, 'x');

    if (d1 == d2)
		return (0);
	printf("Expected:	%s\n", d1);
	printf("Output:		%s\n", d2);
	return (1);
}

int		test_strchr3()
{
	char *src = "Ä«Å<93>Ë<99>Ë<80>Ë<98>Â¯Ë<87>Â¸Â¯.Å<93>Â«â<80><98>â<80><93>â<80><93>â<84>¢Âªâ<80>¢Â¡Â¶Â¢Ë<9c>Ë<80>";
    char *d1 = strchr(src, '<80>');
    char *d2 = ft_strchr(src, '<80>');

    if (d1 == d2)
		return (0);
	return (1);
}

int		test_strchr4()
{
	char *src = "\0";
    char *d1 = strchr(src, 'a');
    char *d2 = ft_strchr(src, 'a');

    if (d1 == d2)	
		return (0);
	printf("Expected:	%s\n", d1);
	printf("Output:		%s\n", d2);
	return (1);

}
int		main(void)
{
	char 	src[20] = "!@#Ja09~";
	char 	srcA[20] = "";
	char 	src1[20] = "!@#Ja09~";
	char 	src2[20] = "!@#Ja09~";
	char 	src3[20] = "!@#Ja09~";
	char 	src4[20] = "!@#Ja09~";
	char	src5[20];
	char	src6[20];
	char	src7[20] = "AAAAAAAAAAAAAA";
	char	src8[20] = "AAAAAAAAAAAAAA";
	char	src9[20];
	char	src10[20];
	char	src11[20] = "AAAAAAAAAAAAAA";
	char	src12[20] = "AAAAAAAAAAAAAA";
	char	src13[20];
	char	src14[20];
	char	src15[20] = "a";
	char	src16[20] = "a";
	char	src17[20] = "aAA";
	char	src18[20] = "aAA";

	int		err_flag = 0;
	
	//STRCMP TEST
	
	int		ret1 = strcmp(src8, src18);
	int		ret2 = ft_strcmp(src8, src18);
	int		ret3 = strcmp(src2, src3);
	int		ret4 = ft_strcmp(src2, src3);

	if ((ret1 != ret2) || (ret3 != ret4))
	{
		printf("\033[0;31mSTRCMP FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRNCMP TEST
	int		ret5;
	int		ret6;
	int 	ret7;
	int		ret8;
	int		i_strncmp = -1;

	while (++i_strncmp < 20)
	{
		ret5 = strncmp(src8, src18, i_strncmp);
		ret6 = ft_strncmp(src8, src18, i_strncmp);
		ret7 = strncmp(src2, src3, i_strncmp);
		ret8  = ft_strncmp(src2, src3, i_strncmp);
		
		if ((ret1 != ret2) || (ret3 != ret4))
		{
			printf("\033[0;31mSTRnCMP FAILED\033[0m\n");
			err_flag = 1;
			break ;
		}
	}

	//STRCAT TEST
	strcat(src1, src);
	ft_strcat(src2, src);
	if (strcmp(src1, src2) != 0)
	{
		printf("\033[0;31mSTRCAT FAILED\033[0m\n");
		err_flag = 1;
	}

	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char *str2 = "yolo !";
    char buff1[0xF00] = "there is no stars in the sky";
    char *r1 = __builtin___strcat_chk (buff1, str, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
    char *r2 = ft_strcat(buff1, str);
    if (r1 != r2)
	{
		printf("Expected:	%s\n", r1);
		printf("Output: 	%s\n", r2);
		printf("\033[0;31mSTRCAT FAILED\033[0m\n");
		err_flag = 1;
	}
    char buff2[0xF00] = "yolo";
    r1 = __builtin___strcat_chk (buff2, str, __builtin_object_size (buff2, 2 > 1 ? 1 : 0));
    r2 = ft_strcat(buff2, str);
    if (r1 != r2)
	{
		printf("\033[0;31mSTRCAT FAILED\033[0m\n");
		err_flag = 1;
	}
    char buff3[0xF00] = "";
    r1 = __builtin___strcat_chk (buff3, str2, __builtin_object_size (buff3, 2 > 1 ? 1 : 0));
    r2 = ft_strcat(buff3, str2);
    if (r1 != r2)
	{
		printf("\033[0;31mSTRCAT FAILED\033[0m\n");
		err_flag = 1;
	}
	
	//STRDUP TEST
	char	*output1 = strdup(src);
	char	*output2 = ft_strdup(src);
	if (strcmp(output1, output2) != 0 || strcmp(strdup(srcA), ft_strdup(srcA)) != 0)
	{
		printf("%s\n", output1);
		printf("%s\n", output2);
		printf("\033[0;31mSTRCDUP FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRNDUP TEST

	int		i_strndup = -1;
	char	*output3 = strdup(src);
	char	*output4 = ft_strdup(src);

	while (++i_strndup < 20)
	{
		output3 = strndup(src, i_strndup);
		output4 = ft_strndup(src, i_strndup);
		if (strcmp(output1, output2) != 0 ||
				strcmp(strndup(srcA, i_strndup), ft_strndup(srcA, i_strndup)) != 0)
		{
			printf("%s\n", output1);
			printf("%s\n", output2);
			printf("\033[0;31mSTRNDUP FAILED\033[0m\n");
			err_flag = 1;
		}
	}

	str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff5[0xF00] = "there is no stars in the sky";
    size_t max = 5;
    r1 = __builtin___strncat_chk (buff5, str, max, __builtin_object_size (buff5, 2 > 1 ? 1 : 0));
    r2 = ft_strncat(buff5, str, max);
    if (r1 != r2)
	{
		printf("%s\n", r1);
		printf("%s\n", r2);
		printf("\033[0;31mSTRNCAT FAILED\033[0m\n");
		err_flag = 1;
	}
    char buff4[0xF0] = "AAA";
    r1 = __builtin___strncat_chk (buff4, "BBB", 1, __builtin_object_size (buff4, 2 > 1 ? 1 : 0));
    r2 = ft_strncat(buff4, "BBB", 1);
    if (r1 != r2)
	{
		printf("\033[0;31mSTRNCAT FAILED\033[0m\n");
		err_flag = 1;
	}
	//STRCPY TEST
	strcpy(src5, src);
	ft_strcpy(src6, src);
	strcpy(src7, src);
	ft_strcpy(src8, src);
	if (strcmp(src5, src6) != 0 || strcmp(src7, src8))
	{
		printf("\033[0;31mSTRCPY FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRNCPY TEST
	strncpy(src9, src, 7);
	ft_strncpy(src10, src, 7);
	strncpy(src11, src, 0);
	ft_strncpy(src12, src, 0);
	strncpy(src13, src, 15);
	ft_strncpy(src14, src, 15);
	if (strcmp(src9, src10) != 0 || strcmp(src11, src12) != 0
			|| strcmp(src13, src14) != 0)
	{
		printf("\033[0;31mSTRNCPY FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRCHR TEST
	char *srcB = "/|\x12\xff\x09\x42\2002\42|\\";
    int size = 10;

    if (memchr(srcB, '\200', size) != ft_memchr(srcB, '\200', size))
	{
		printf("\033[0;31mSTRCHR FAILED\033[0m\n");
		err_flag = 1;
	}

	char *dest1 = strchr(src, 'a');
	char *dest2 = ft_strchr(src, 'a');
	char *dest3 = strchr(src, '\0');
	char *dest4 = ft_strchr(src, '\0');
	if (strcmp(dest1, dest2) != 0 || strcmp(dest3, dest4))
	{
		printf("\033[0;31mSTRCHR FAILED\033[0m\n");
		err_flag = 1;
	}
	if (test_strchr1() == 1)
	{
		printf("\033[0;31mSTRCHR FAILED Test1\033[0m\n");
		err_flag = 1;
	}
	if (test_strchr2() == 1)
	{
		printf("\033[0;31mSTRCHR FAILED Test2\033[0m\n");
		err_flag = 1;
	}
	if (test_strchr3() == 1)
	{
		printf("\033[0;31mSTRCHR FAILED Test3\033[0m\n");
		err_flag = 1;
	}
	if (test_strchr4() == 1)
	{
		printf("\033[0;31mSTRCHR FAILED Test4\033[0m\n");
		err_flag = 1;
	}
	
	//STRSTR TEST
	if (test_strstr1() == 1)
	{
		printf("\033[0;31mSTRSTR FAILED Test1\033[0m\n");
		err_flag = 1;
	}
	if (test_strstr2() == 1)
	{
		printf("\033[0;31mSTRSTR FAILED Test2\033[0m\n");
		err_flag = 1;
	}
	if (test_strstr3() == 1)
	{
		printf("\033[0;31mSTRSTR FAILED Test3\033[0m\n");
		err_flag = 1;
	}
	if (test_strstr4() == 1)
	{
		printf("\033[0;31mSTRSTR FAILED Test4\033[0m\n");
		err_flag = 1;
	}
	if (test_strstr5() == 1)
	{
		printf("\033[0;31mSTRSTR FAILED Test5\033[0m\n");
		err_flag = 1;
	}
	
	//STRNCAT TEST
	strncat(src3, src, 4);
	ft_strncat(src4, src, 4);
	if (strcmp(src3, src4) != 0)
	{
		printf("\033[0;31mSTRCAT FAILED\033[0m\n");
		err_flag = 1;
	}

	//STRLCAT TEST
	int		ans1 = strlcat(src15, src, 5);
	int		ans2 = ft_strlcat(src16, src, 5);
	int		ans3 = strlcat(src17, src, 20);
	int		ans4 = ft_strlcat(src18, src, 20);


	if ((ans1 != ans2) || (ans3 != ans4))
	{
		printf("\033[0;31mTest1: STRLCAT FAILED\033[0m\n");
		err_flag = 1;
	}
	if ((strcmp(src15, src16) != 0) || (strcmp(src17, src18) != 0))
	{
		printf("\033[0;31mTest2: STRLCAT FAILED\033[0m\n");
		err_flag = 1;
	}
	//STRLEN TEST
	if (strlen(src) != ft_strlen(src))
	{
		printf("\033[0;31mSTRLEN FAILED\033[0m\n");
		err_flag = 1;
	}
	//STRNLEN TEST
	int	i_strnlen = -1;

	while (++i_strnlen > 0)
	{
		if (strnlen(src, i_strnlen) != ft_strnlen(src, i_strnlen))
		{
			printf("\033[0;31mSTRNLEN FAILED\033[0m\n");
			err_flag = 1;
		}
	}

	if (err_flag != 1)
		printf("\033[0;32mSTR Tests Passed\033[0m\n");
}
