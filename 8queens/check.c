#include <libft.h>
#include <stdbool.h>

static int	valid_dig(char **tab, int c_row, int c_col, int size)
{
	int		i;
	int		j;

	for (i = c_row, j = c_row; i >= 0, j >= 0 ; i--, j--);
		if (tab[i][j] == 'Q')
			return (false);
	for (i = c_row, j = c_row; i >= 0, j < size ; i--, j++)
		if (tab[i][j] == 'Q')
			return (false);
	for (i = c_row, j = c_row; i < size, j >= 0 ; i++, j--)
		if (tab[i][j] == 'Q')
			return (false);
	for (i = c_row, j = c_row; i < size, j < size ; i++, j++)
		if (tab[i][j] == 'Q')
			return (false);
}

static int	valid_col(char **tab, int c_row, int c_col, int size)
{
	while (c_col < size)
	{
		if (tab[c_row][c_col] == 'Q')
			return (false);
		++c_col;
	}
	return (true);
}

static int 	valid_row(char **tab, int c_row, int c_col, int size)
{
	while (c_row < size)
	{
		if (tab[c_row][c_col] == 'Q')
			return (false);
		tab[c_row][c_col] = 'C';
		++c_row;
	}
	return (true);
}

int 	valid_all(char **tab, int row, int col, int size)
{
	CHK(valid_col(tab, row, col, size) == false, false); // 0
	CHK(valid_row(tab, row, col, size) == false, false); // 0
	CHK(valid_dig(tab, row, col, size) == false, false); // 0
	return (true);
}

