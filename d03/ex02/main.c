/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 13:36:38 by tri               #+#    #+#             */
/*   Updated: 2020/01/10 14:31:45 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int i;
	int j;
	i = 2;
	j = 4;
	int *a = &j;
	int *b = &j;
	ft_swap(a, b);
	printf("\nValue of i should be 2 and it is : %u",*a);
	printf("\nVAlue of j should be 4 and it is : %u",*b);
}
