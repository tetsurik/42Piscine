/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:00:02 by tri               #+#    #+#             */
/*   Updated: 2020/01/26 20:20:21 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i % 10 != i)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar(i % 10 + '0');
}

int		ft_atoi(char **str)
{
	int i;
	int neg;

	i = 0;
	neg = 1;
	while (**str && (**str == ' ' || **str == '\n' || **str == '\t'
	|| **str == '\v' || **str == '\f' || **str == '\r'))
		++*str;
	if (**str == '-')
		neg = -1;
	if (**str == '-' || **str == '+')
		++str;
	while (**str >= '0' && **str <= '9')
	{
		i = i * 10 + (**str - '0');
		++*str;
	}
	return (i * neg);
}
