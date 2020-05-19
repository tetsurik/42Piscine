/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 22:11:29 by tri               #+#    #+#             */
/*   Updated: 2020/01/19 23:24:40 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    helper(char **grid, char num, int index);
int		valid(char **grid, int num, int pos_i, int pos_j);
void	print(char **grid);
int		solver(char **grid, int index)
{
	int		i;
	int		j;
	char	num;

	if (index == 81)
	{
		print(grid);
		return (1);
	}
	i = (index / 9) + 1;
	j = index % 9;
	if (grid[i][j] != '0')
		solver(grid, index + 1);
	else
	{
		num = '0';
		while (++num <= '9')
		{
			if (valid(grid, num, i, j))
				solver(grid, index);
		}
	}
	return (0);
}

int		valid(char **grid, int num, int pos_i, int pos_j)
{
	int i;
	i = 0;

	int sector_row = 3 * (pos_i / 3);
    int sector_col = 3 * (pos_j / 3);
    int row1 = (pos_i + 2) % 3;
    int row2 = (pos_i + 4) % 3;
    int col1 = (pos_j + 2) % 3;
    int col2 = (pos_j + 4) % 3;
	while (i < 9)
	{
		if (grid[i][pos_j] == num && i != pos_i)
			return (0);
		if (grid[pos_i][i] == num && i != pos_j)
			return (0);
		i++;
	}
	if(grid[row1+sector_row][col1+sector_col] == num)
		return (0);
    if(grid[row2+sector_row][col1+sector_col] == num)
		return (0);
    if(grid[row1+sector_row][col2+sector_col] == num)
		return (0);
    if(grid[row2+sector_row][col2+sector_col] == num)
		return (0);
    return 1;
}

void	print(char **grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < 9)
	{
		j = 0;
		while (j < 9)
		{
			write(1, &grid[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char const *argv[])
{
	int i;
	int j;
	char **grid;
	int index;

	i = 1;
	j = 0;
	index = 0;
	while(i < 10)
	{
		j = 0;
		while(j < 9)
		{
			if(argv[i][j] != '.')
				grid[i-1][j] = argv[i][j];
			else
				grid[i-1][j] = '0';
			j++;
		}
		i++;
	}
	print(grid);
	solver(grid, index);

	return (0);
}
