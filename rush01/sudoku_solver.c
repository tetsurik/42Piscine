/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillega <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 16:03:38 by gvillega          #+#    #+#             */
/*   Updated: 2020/01/19 23:30:05 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
int		number_used_in_col(char grid[9][9], int num, int col)
{
	return (0);
}

int		number_used_in_row(char grid[9][9], int num, int row)
{
	return (0);
}

int		number_used_in_box(char grid[9][9], int num)
{
	return (0);
}

int		solve(char grid[9][9])
{
	return (0);
}
*/ 
char find_empty(char grid)
{


void	print(char grid[9][9])
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
	char grid[9][9];

	i = 1;
	j = 0;
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
	return (0);
}
