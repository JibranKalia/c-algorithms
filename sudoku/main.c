#include <stdio.h>
#include <libft.h>
#include <stdlib.h>
#include <unistd.h>

static void	tbl_del(char **src)
{
	int 	i;

	i = 0;
	while(src[i])
	{
		free(src[i]);
		++i;
	}
	free(src);
}

static void	print_board(char **tab)
{
	int 	i;
	int 	j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &(tab[i][j]), 1);
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}

int 		checkboard(char **argv, int i)
{
	int 	j;
	int 	limit;

	limit = (i == 0) ? 9 : 10;
	while (i < limit)
	{
		j = 0;
		while (j < 9)
		{
			if((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '.')
				j++;
			else
				return (1);
		}
		if (argv[i][9] != '\0')
			return (1);
		i++;
	}
	return (0);
}

static int	chk_row(char **tab, int row, int col, char num)
{
	while (row < 9)
	{
		if(tab[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

static int	chk_col(char **tab, int row, int col, char num)
{
	while (col < 9)
	{
		if(tab[row][col] == num)
			return (0);
		++col;
	}
	return (1);
}

static int	chk_sqr(char **tab, int row, int col, char num)
{
	int r_limit;
	int c_limit;

	r_limit = 0;
	while(r_limit < 3)
	{
		c_limit = 0;
		while(c_limit < 3)
		{
			if (tab[r_limit + (row * 3)][c_limit + (3 * col)] == num)
				return (0);
			++c_limit;
		}
		++r_limit;
	}
	return (1);
}

static int	valid_num(char **tab, int row, int col, char num)
{
	CHK(chk_col(tab, row, col, num) == 0, 0);
	CHK(chk_row(tab, row, col, num) == 0, 0);
	CHK(chk_sqr(tab, row / 3, col / 3, num) == 0, 0);
	return (1);
}

static int	empty_square_rev(char **tab, int *row, int *col)
{
	int		r_count;
	int		c_count;

	r_count	 = 8;
	while (r_count >= 0)
	{
		c_count = 8;
		while (c_count >= 0)
		{
			if (tab[r_count][c_count] == '.')
			{
				*row = r_count;
				*col = c_count;
				return (1);
			}
			--c_count;
		}
		--r_count;
	}
	return (0);
}

static int	solve_board_rev(char** tab)
{
	int 	row;
	int 	col;
	char 	num;

	num = '9';
	if (!empty_square_rev(tab, &row, &col))
		return (1);
	while (num >= '1')
	{
		if (valid_num(tab, row, col, num) == 1)
		{
			tab[row][col] = num;
			if (solve_board_rev(tab))
				return (1);
			tab[row][col] = '.';
		}
		--num;
	}
	return (0);
}

static int	empty_square(char **tab, int *row, int *col)
{
	int		r_count;
	int		c_count;

	r_count	 = 0;
	while (r_count < 9)
	{
		c_count = 0;
		while (c_count < 9)
		{
			if (tab[r_count][c_count] == '.')
			{
				*row = r_count;
				*col = c_count;
				return (1);
			}
			++c_count;
		}
		++r_count;
	}
	return (0);
}

static int	solve_board(char** tab)
{
	int 	row;
	int 	col;
	char 	num;

	num = '1';
	if (!empty_square(tab, &row, &col))
		return (1);
	while (num <= '9')
	{
		if (valid_num(tab, row, col, num) == 1)
		{
			tab[row][col] = num;
			if (solve_board(tab))
				return (1);
			tab[row][col] = '.';
		}
		++num;
	}
	return (0);
}

static char **tab_dup(char **argv)
{
	int 	i;
	char 	**tab;

	i = 0;
	CHK((tab = ft_memalloc(sizeof(char*) * 10)) == 0, 0);
	while (i < 9)
	{
		CHK1((tab[i] = ft_memalloc(sizeof(char) * 10)) == 0, tbl_del(tab), 0);
		ft_strcpy(tab[i], argv[i + 1]);
		++i;
	}
	return (tab);
}

int 		compare(char **tab1, char **tab2)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab1[i][j] != tab2[i][j])
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	char 	**tab;
	char 	**rev_tab;
	int		i;

	i = 0;
	CHK1(argc != 10, ft_putstr("Error1\n"), 0);
	CHK1(checkboard(argv, 1) == 1, ft_putstr("Error2\n"), 0);
	CHK1((tab = tab_dup(argv)) == 0, ft_putstr("Error3\n"), 0);
	CHK1(checkboard(tab, 0) == 1, ft_putstr("Error4\n"), 0);
	CHK1(!solve_board(tab), ft_putstr("Error5\n"), 0);
	//CHK1((rev_tab = tab_dup(argv)) == 0, ft_putstr("Error6\n"), 0);
	//CHK1(!solve_board_rev(rev_tab), ft_putstr("Error7\n"), 0);
	print_board(tab);
	ft_putstr('\n');
	//print_board(rev_tab);
	//CHK1(compare(tab, rev_tab) == 1, ft_putstr("Error8\n"), 0);
	//print_board(tab);
	tbl_del(tab);
	tbl_del(rev_tab);
	return (0);
}