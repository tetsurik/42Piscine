/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 04:57:12 by tri               #+#    #+#             */
/*   Updated: 2020/01/14 06:18:41 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int r;
	int neg;
	int i;

	i = 0;
	r = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || 
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		++i;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1] >= '0' && str[i + 1] <= '9')
	{	if (str[i] == '-')
			neg = -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		++i;
	}
	return (r * neg);
}

int  main()
{
	int positive;
	int negative;
	int normal;
	int error;
	int space;
	int doublesignal;

	positive = ft_atoi("+123");
	negative = ft_atoi("-123");
	normal = ft_atoi("123");
	error = ft_atoi ("asd123");
	space = ft_atoi("   123");
	doublesignal = ft_atoi(" --123");

	printf("%d\n", positive);
	printf("%d\n", negative);
	printf("%d\n", normal);
	printf("%d\n", error);
	printf("%d\n", space);
	printf("%d\n", doublesignal);
}

