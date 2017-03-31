#include "libft.h"
#include <stdlib.h>
#include <stdio.h> 

int		main(void)
{
	int		mem_flag;
	char 	csrc[20] = "Geeksfor";
	char 	csrc1[20] = "Geeksfor";
	char 	csrc2[20] = "Geeksfor";

	char 	csrcA[20] = "Geeksfor";
	char 	csrcB[20] = "Geeksfor";
	char 	csrcC[20] = "Gesfor";
	char 	csrcD[20] = "Geeksfr";

	char 	dst1[20];
	char 	dst2[20];
	char	dst3[20];
	char	dst4[20];
	char	dst5[30] = "AAAAAAAAAAAAAAAAAAAAA";
	char	dst6[30] = "AAAAAAAAAAAAAAAAAAAAA";

	// MEMCPY TESTS
	memcpy(dst1, csrc, 10);
	ft_memcpy(dst2, csrc, 10);

	if (ft_strcmp(dst1, dst2) == 0)
		mem_flag = 1;
	else
	{
		mem_flag = 0;
		printf("Memcpy FAILED\n");
	}

	char src[] = "test basic du memcpy !";
    char buff1[22];
    char *r1 = __builtin___memcpy_chk (buff1, src, 22, __builtin_object_size (buff1, 0));    
	char *r2 = ft_memcpy(buff1, src, 22);
    if (r1 != r2)
	{
		mem_flag = 0;
		printf("Test1: Memcpy FAILED\n");
		printf("%s\n", r1);
		printf("%s\n", r2);
	}

    r1 = __builtin___memcpy_chk ("", src, 0, __builtin_object_size ("", 0));
    r2 = ft_memcpy("", src, 0);
    if (r1 != r2)
	{
		mem_flag = 0;
		printf("Memcpy FAILED\n");
	}

	//MEMSET TESTS
	memset(dst5, 'f', 7);
	ft_memset(dst6, 'f', 7);

	if (ft_strcmp(dst5, dst6) == 0)
		mem_flag = 1;
	else
	{
		mem_flag = 0;
		printf("Memset FAILED\n");
	}

	// MEMCMP TESTS
	int cmp_flag = 0;
	if (memcmp(csrc1, csrc, 10) != ft_memcmp(csrc1, csrc, 10))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 1);
	if (memcmp(csrcA, csrcB, 10) != ft_memcmp(csrcA, csrcB, 10))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 2);
	if (memcmp(csrcA, csrcC, 10) != ft_memcmp(csrcA, csrcC, 10))
	{
		printf("LIB:	%d\n", memcmp(csrcA, csrcC, 10));
		printf("FT:		%d\n", ft_memcmp(csrcA, csrcC, 10));

		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 3);
	}
	if (memcmp(csrcA, csrcD, 10) != ft_memcmp(csrcA, csrcD, 10))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 4);
	if (memcmp(csrcA, csrcD, 0) != ft_memcmp(csrcA, csrcD, 0))
		printf("\e[0;31mMemcmp Test%d FAILED\e[0m\n", cmp_flag = 5);

	if (cmp_flag > 0)
		mem_flag = 0;

	// MEMCCPY TESTS
	memccpy(dst3, csrc, 'f', 10);
	ft_memccpy(dst4, csrc, 'f', 10);

	if (ft_strcmp(dst3, dst4) == 0 && mem_flag == 1)
		mem_flag = 1;
	else if (ft_strcmp(dst3, dst4) != 0)
	{
		mem_flag = 0;
		printf("\e[0;31mMemccpy FAILED\e[0m\n");
		printf("Expected Output: 	%s\n", dst3);
		printf("Function Output:	%s\n", dst4);
	}

	// MEMCHR TESTS
	const char *output1 = (char*)memchr(csrc, 'f', 10);
	const char *output2 = (char*)ft_memchr(csrc, 'f', 10);
	const char *output3 = (char*) memchr(csrc, 'k', 2);
	const char *output4 = (char*) ft_memchr(csrc, 'k', 2);
	
	int res1 = ft_strcmp(output1, output2);
	int res2; //Can't use strcmp to compare NULL strings. 
	if (output3 == NULL && output4 == NULL)
		res2 = 1;
	if (res1 == 0 && res2 == 1 && mem_flag == 1) 
		mem_flag = 1;
	else if (ft_strcmp(output1, output2) != 0)
	{
		mem_flag = 0;
		printf("Expected Output:	%s\n", output1);
		printf("Function Output:	%s\n", output2);
		printf("\e[0;31mMemcchr FAILED\e[0m\n");
	}

	// MEMMOVE TESTS
	memmove(csrc1 + 5, csrc1, 10);
	ft_memmove(csrc2 + 5, csrc2, 10);

	if (ft_strcmp(csrc1, csrc2) == 0 && mem_flag == 1)
		mem_flag = 1;
	else if (ft_strcmp(csrc1, csrc2) != 0)
	{
		mem_flag = 0;
		printf("\e[0;31mMemmove FAILED\e[0m\n");
	}

	if (mem_flag == 1)
		printf("\033[0;32mMEM Tests Passed\n\033[0m");
	else 
		printf("\033[0;31mFailed Mem Test\n\033[0m");

	return (0);
}
