/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:44:05 by tri               #+#    #+#             */
/*   Updated: 2020/01/22 21:55:58 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		count;

	count = 0;
	if (!begin_list)
		return (count);
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		++count;
	}
	return (count);
}
