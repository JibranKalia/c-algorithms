#include <libft.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "queen.h"

int g_size;
int g_solution;

static void		tbl_del(char **src)
{
	int i;

	i = 0;
	while (src[i])
	{
		free(src[i]);
		++i;
	}
	free(src);
}



static char		**make_board(int n)
{
	char 	**tab;
	int 	i;
	int 	j;

	i = 0;
	CHK((tab = ft_memalloc(sizeof(char*) * n)) == 0, 0);
	while (i < n)
	{
		CHK1((tab[i] = ft_memalloc(sizeof(char) * (n + 1))) == 0, tbl_del(tab), 0);
		j = 0;
		while (j < n)
		{
			tab[i][j] = '.';
			++j;
		}
		++i;
	}
	return (tab);
}

static void		printboard(char **tab, int g_size)
{
	int		row;
	int 	col;

	row = 0;
	while (row < g_size)
	{
		col = 0;
		while (col < g_size)
		{
			write(1, &(tab[row][col]), 1);
			ft_putstr("  ");
			++col;
		}
		ft_putstr("\n\n");
		++row;
	}
}

int 	solveboard(char **tab, int row)
{
	if(row == g_size)
	{
		printboard(tab, g_size);
		g_solution;
		return (1);
	}

	int col;
	col = 0;
	while (col < g_size)
	{
		if (valid_all(tab, row, col, g_size) == true)
		{
			tab[row][col] = 'Q';
			if (solveboard(tab, row + 1) == 1)
				return (1);
			tab[row][col] = '.';
		}
		++col;
	}
	return (0);
}

int main()
{
	g_size = 8;
	char 	**tab;
	CHK1((tab = make_board(g_size)) == 0, ft_putstr("Error\n"), 0);

	solveboard(tab, 0);
}