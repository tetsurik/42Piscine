/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 22:11:29 by tri               #+#    #+#             */
/*   Updated: 2020/01/21 14:12:02 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int		main(void)
{
//	int i;

	int pos_i = 8;
	int pos_j = 8;

//	i = 0;

	int sector_row = 3 * (pos_i / 3);
    int sector_col = 3 * (pos_j / 3);
    int row1 = (pos_i + 2) % 3;
    int row2 = (pos_i + 4) % 3;
    int col1 = (pos_j + 2) % 3;
    int col2 = (pos_j + 4) % 3;
	printf("sector row is %d\n", sector_row);
	printf("sector column is %d\n", sector_col);
	printf("row1 is %d\n", row1);
	printf("sector row2 is %d\n", row2);
	printf("sector col1 is %d\n", col1);
	printf("sector col2 is %d\n", col2);


	/*	while 
	 *	(i < 9)
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
	*/
}

