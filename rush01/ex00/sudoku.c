/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 22:23:50 by tri               #+#    #+#             */
/*   Updated: 2020/01/19 22:02:52 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>	

int		find_empty(char grid[9][9]);
		
int		solve(char grid[9][9])
{
	int pos_i;
	int pos_j;

	int i = 0;
	printf("this is step one");
	printf("this is step six");
	int empty = find_empty(grid);
//	while  (i < 2)
//	{
//		printf("%d, ", find_empty(grid));
//		i++;
//	}

		return (0);
}
/*
int		valid(char grid[9][9], int num, int pos_i, int pos_j)
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
*/
int		find_empty(char grid[9][9])
{
	int i;
	int j;
	int *empty;
	printf("this is step two");

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9) 
		{
			if (grid[i][j] == '0')
			{
				printf("this is step five");

				empty[0] = i;
				empty[1] = j;
				return(*empty);
			}
			j++;
		}
		i++;
	}
	return (0);
}

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
	solve(grid);

	return (0);
}
