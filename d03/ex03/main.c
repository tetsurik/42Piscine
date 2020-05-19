/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:34:02 by tri               #+#    #+#             */
/*   Updated: 2020/01/10 14:52:31 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div;
	int mod;

	ft_div_mod(20, 5, &div, &mod);

	printf("\n20 divided by 5 is : %u", *div);
	printf("\nThe remainder is : %u", *mod);
}
