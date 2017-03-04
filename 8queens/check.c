#include <libft.h>
#include <stdbool.h>

static int	valid_dig(char **tab, int c_row, int c_col, int size)
{
	int row;
	int col;

	row = c_row;
	col = c_col;
	while (row >= 0 && col >= 0)
	{
		if (tab[row][col] == 'Q')
			return (false);
		--row;
		--col;
	}

	row = c_row;
	col = c_col;
	while (row < size && col >= 0)
	{
		if (tab[row][col] == 'Q')
			return (false);
		++row;
		--col;
	}

	row = c_row;
	col = c_col;
	while (row >= 0 && col < size)
	{
		if (tab[row][col] == 'Q')
			return (false);
		--row;
		++col;
	}

	row = c_row;
	col = c_col;
	while (row < size && col < size)
	{
		if (tab[row][col] == 'Q')
			return (false);
		++row;
		++col;
	}
	return (true);
}

static int	valid_col(char **tab, int c_row, int c_col, int size)
{
	c_col = 0;
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
	c_row = 0;
	while (c_row < size)
	{
		if (tab[c_row][c_col] == 'Q')
			return (false);
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

