/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:13:46 by tri               #+#    #+#             */
/*   Updated: 2020/01/21 23:08:46 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft.h"

int		get_operation(char *operator)
{
	if (operator[1] != '\0')
		return (-1);
	if (operator[0] == '+')
		return (0);
	if (operator[0] == '-')
		return (1);
	if (operator[0] == '*')
		return (2);
	if (operator[0] == '/')
		return (3);
	if (operator[0] == '%')
		return (4);
	return (-1);
}

int		calculate(int a, int b, int operation)
{
	int	(*operations[5])(int, int);

	operations[0] = &ft_add;
	operations[1] = &ft_sub;
	operations[2] = &ft_mul;
	operations[3] = &ft_div;
	operations[4] = &ft_mod;
	return ((*operations[operation])(a, b));
}

int		main(int argc, char *argv[])
{
	int	ans;
	int	operator;

	if (argc != 4)
		return (0);
	operator = get_operation(argv[2]);
	if (operator == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else if (operator == 3 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (operator == 4 && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ans = calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), operator);
	ft_putnbr(ans);
	ft_putchar('\n');
	return (0);
}
