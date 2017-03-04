#include <ctype.h> 
#include "libft.h"
#include <stdio.h> 

int	main (void)
{
	int		i;
	i = -1;

	while (++i < 128)
	{
		if (isalnum(i) != ft_isalnum(i))
			printf("ERROR is_alnum ASCII: %d\n", i);
		if (isalpha(i) != ft_isalpha(i))
			printf("ERROR is_alpha ASCII: %d\n", i);
		if (isascii(i) != ft_isascii(i))
			printf("ERROR is_ascii ASCII: %d\n", i);
		if (isblank(i) != ft_isblank(i))
			printf("ERROR is_alpha ASCII: %d\n", i);
		if (iscntrl(i) != ft_iscntrl(i))
			printf("ERROR is_cntrl ASCII: %d\n", i);
		if (isdigit(i) != ft_isdigit(i))
			printf("ERROR is_digit ASCII: %d\n", i);
		if (isgraph(i) != ft_isgraph(i))
			printf("ERROR is_graph ASCII: %d\n", i);
		if (islower(i) != ft_islower(i))
			printf("ERROR is_islower ASCII: %d\n", i);
		if (isprint(i) != ft_isprint(i))
			printf("ERROR is_isprint ASCII: %d\n", i);
		if (ispunct(i) != ft_ispunct(i))
			printf("ERROR is_ispunct ASCII: %d\n", i);
		if (isspace(i) != ft_isspace(i))
			printf("ERROR is_isspace ASCII: %d\n", i);
		if (isupper(i) != ft_isupper(i))
			printf("ERROR is_isupper ASCII: %d\n", i);
		if (isxdigit(i) != ft_isxdigit(i))
			printf("ERROR is_isxdigit ASCII: %d\n", i);
		if (tolower(i) != ft_tolower(i))
			printf("ERROR to_lower ASCII: %d\n", i);
		if (toupper(i) != ft_toupper(i))
			printf("ERROR to_upper ASCII: %d\n", i);
	}
	printf("\033[0;32mCTYPE TESTS pass if no error^^^\033[0m\n");
	return (0);
}
