/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:39:49 by tri               #+#    #+#             */
/*   Updated: 2020/01/16 15:55:21 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (src[size])
		++size;
	if (!(new = (char*)malloc(sizeof(*src) * (size + 1))))
	{
		new = NULL;
		return (new);
	}
	while (i < size)
	{
		new[i] = src[i];
		i++;
	}
	return (new);
}
