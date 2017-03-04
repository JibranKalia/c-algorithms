#include <libft.h>

static int 	chk_dig_1(char **tab, int c_row, int c_col, int size)
{
	if (c_col == 0)
		return (0);
	if (c_row == size)
		return (0);
	if (tab[c_row][c_col] == 'Q')
		return (1);
	return (chk_dig_1(tab, c_row + 1, c_col - 1, size));
}

static int 	chk_dig_2(char **tab, int c_row, int c_col, int size)
{
	if (c_row == 0)
		return (0);
	if (c_col == size)
		return (0);
	if (tab[c_row][c_col] == 'Q')
		return (1);
	return (chk_dig_2(tab, c_row - 1, c_col + 1, size));
}

static int 	chk_dig_3(char **tab, int c_row, int c_col, int size)
{
	if (c_col == 0)
		return (0);
	if (c_row == 0)
		return (0);
	if (tab[c_row][c_col] == 'Q')
		return (1);
	return (chk_dig_3(tab, c_row - 1, c_col - 1, size));
}

static int 	chk_dig_4(char **tab, int c_row, int c_col, int size)
{
	if (c_col == size)
		return (0);
	if (c_row == size)
		return (0);
	if (tab[c_row][c_col] == 'Q')
		return (1);
	return (chk_dig_4(tab, c_row + 1, c_col + 1, size));
}

static int 	chk_col(char **tab, int c_row, int c_col, int size)
{

	c_col = 0;
	while (c_col < size)
	{
		if (tab[c_row][c_col] == 'Q')
			return (0);
		++c_col;
	}
	return (1);
}

static int 	chk_row(char **tab, int c_row, int c_col, int size)
{
	c_row = 0;
	while (c_row < size)
	{
		if (tab[c_row][c_col] == 'Q')
			return (0);
		++c_row;
	}
	return (1);
}

int 	chk_all(char **tab, int row, int col, int size)
{
	if (tab[row, col] == 'Q')
		return (0);
	CHK(chk_col(tab, row, col, size) == 0, 0); // 0
	CHK(chk_row(tab, row, col, size) == 0, 0); // 0
	CHK(chk_dig_1(tab, row, col, size) == 1, 0); // 0
	CHK(chk_dig_2(tab, row, col, size) == 1, 0); // 0
	CHK(chk_dig_3(tab, row, col, size) == 1, 0); // 0
	CHK(chk_dig_4(tab, row, col, size) == 1, 0); // 0
	return (1);
}

