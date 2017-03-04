#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "libft.h"

int		atoi_test1(void)
{
	char src[100][100] = {"01", "  22", "    1234", " a   1234", "   12a  34",
		"   12  34", "   \n12  34", "   \n12  34", "   \n-12  34", "   \n-12-  34",
		"  --12-  34", "2147483647", "-2147483648", "30000000000", "-300000000", 
		"-300000000000", "-997852516352", "-97852516352", "-7852516352", 
		"-7852516352", "2147483648", "1147483648"};

	int		i = 0;
	while (i < 30)
	{
		char	*n = src[i];
    	int 	i1 = atoi(n);
    	int 	i2 = ft_atoi(n);
		if (i1 != i2)
		{
			printf("-----------------------------------------------------------------\n");
			printf("\033[0;31mTestA%d: Atoi Failed\n\033[0m", i);
			printf("Expected:	%d\n", i1);
			printf("Output:		%d\n", i2);
			printf("-----------------------------------------------------------------\n");
		}
		i++;
	}
	return (0);
}

int		atoi_test2(void)
{
	char *n = "945";
    int i1 = atoi(n);
    int i2 = ft_atoi(n);

    if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest2: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test3(void)
{
    char n[40] = "99999999999999999999999999";
    int i1 = atoi(n);
    int i2 = ft_atoi(n);

    if (i1 == i2)
		return (0);

	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest3: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test4()
{
    char n[40] = "-99999999999999999999999999";
    int i1 = atoi(n);
    int i2 = ft_atoi(n);

    if (i1 == i2)
		return (0);

	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest4: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test5()
{
	char *n = "-085";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest5: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test6()
{
	srand(clock());
	for (int i = 0; i < 100; i++)
	{
		char n[15];
		__builtin___sprintf_chk (n, 0, __builtin_object_size (n, 2 > 1 ? 1 : 0), "%i", rand());
		int i1 = atoi(n);
		int i2 = ft_atoi(n);
		if (i1 != i2)
		{
			printf("-----------------------------------------------------------------\n");
			printf("\033[0;31mTest6: Atoi Failed\n\033[0m");
			printf("Expected:	%d\n", i1);
			printf("Output:		%d\n", i2);
			printf("-----------------------------------------------------------------\n");
			return (1);
		}
	}
	return (0);
}

int		atoi_test7()
{
	char *n = "\t\v\f\r\n \f-06050";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest7: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);

}

int		atoi_test8()
{
	char *n = "\t\v\f\r\n \f- \f\t\n\r    06050";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest8: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);

}

int		atoi_test9()
{
	char *n = "\e06050";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest9: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test10()
{
	char *n = "-123THERE IS A NYANCAT UNDER YOUR BED";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);

	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest10: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test11()
{

	char n[15];
	__builtin___sprintf_chk (n, 0, __builtin_object_size (n, 2 > 1 ? 1 : 0), "%i", 2147483647);
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest11: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test12()
{
	char n[15];

	__builtin___sprintf_chk (n, 0, __builtin_object_size (n, 2 > 1 ? 1 : 0), "%i", (-2147483647 -1));
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest12: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test13()
{
	char n[40];

	__builtin___sprintf_chk (n, 0, __builtin_object_size (n, 2 > 1 ? 1 : 0), "%li", 9223372036854775807L);
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	if (i1 == i2)
		return (0);
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest13: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		atoi_test14()
{
	char n[40];
	__builtin___sprintf_chk (n, 0, __builtin_object_size (n, 2 > 1 ? 1 : 0), "%li", (-9223372036854775807L -1L));
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	if (i1 == i2)
		return (0);
	
	printf("-----------------------------------------------------------------\n");
	printf("\033[0;31mTest14: Atoi Failed\n\033[0m");
	printf("Expected:	%d\n", i1);
	printf("Output:		%d\n", i2);
	printf("-----------------------------------------------------------------\n");
	return (1);
}

int		main (void)
{
	int		nbr_flag = 0;

	//ATOI TEST
	if (atoi_test1() == 1)
		nbr_flag = 1;
	if (atoi_test2() == 1)
		nbr_flag = 1;
	if (atoi_test3() == 1)
		nbr_flag = 1;
	if (atoi_test4() == 1)
		nbr_flag = 1;
	if (atoi_test5() == 1)
		nbr_flag = 1;
	if (atoi_test6() == 1)
		nbr_flag = 1;
	if (atoi_test7() == 1)
		nbr_flag = 1;
	if (atoi_test8() == 1)
		nbr_flag = 1;
	if (atoi_test9() == 1)
		nbr_flag = 1;
	if (atoi_test10() == 1)
		nbr_flag = 1;
	if (atoi_test11() == 1)
		nbr_flag = 1;
	if (atoi_test12() == 1)
		nbr_flag = 1;
	if (atoi_test13() == 1)
		nbr_flag = 1;
	if (atoi_test14() == 1)
		nbr_flag = 1;


	//ABS TEST
	int		abs_flag = 0;
	if(abs(2147483647) != ft_abs(2147483647))
		abs_flag = 1;
	if(abs(-2147483647) != ft_abs(-2147483647))
		abs_flag = 1;
	if(abs(0) != ft_abs(0))
		abs_flag = 1;

	if (abs_flag == 1)
	{
		printf("\033[0;31m ABS Failed\n\033[0m");
		nbr_flag = 1;
	}

	if (nbr_flag == 0)
		printf("\033[0;32mAll Nbr Functions PASS\033[0m\n");
	return (0);
}
