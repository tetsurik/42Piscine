/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:42:54 by tri               #+#    #+#             */
/*   Updated: 2020/01/12 19:14:40 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		top_line(int x, int y, int i)
{
	if (x >= 1 && y >= 1)
	{
		ft_putchar('o');
		if (x == 1)
		{
			ft_putchar('\n');
			return (0);
		}
		while (i > 0)
		{
			ft_putchar('-');
			--i;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
	return (0);
}

int		mid_line(int x, int y, int i, int j)
{
	if (y >= 3)
	{
		while (j > 0)
		{
			ft_putchar('|');
			while (i > 0)
			{
				ft_putchar(' ');
				--i;
			}
			i = x - 2;
			if (x != 1)
			{
				ft_putchar('|');
			}
			ft_putchar('\n');
			--j;
		}
	}
	return (0);
}

int		bottom_line(int x, int y, int i)
{
	if (y > 1)
	{
		ft_putchar('o');
		if (x == 1)
		{
			ft_putchar('\n');
			return (0);
		}
		while (i > 0)
		{
			ft_putchar('-');
			--i;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
	return (0);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = x - 2;
	j = y - 2;
	top_line(x, y, i);
	mid_line(x, y, i, j);
	bottom_line(x, y, i);
}
