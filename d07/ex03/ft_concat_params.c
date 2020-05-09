/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 19:47:10 by tri               #+#    #+#             */
/*   Updated: 2020/01/16 22:05:41 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		j;
	int		o;

	i = 1;
	j = 0;
	o = 0;
	args = malloc(sizeof(char) * (argc));
	while (i < argc && argv[i])
	{
		while (argv[i][j] != '\0')
		{
			args[o] = argv[i][j];
			o++;
			j++;
		}
		if ((i + 1) < argc)
			args[o] = '\n';
		o++;
		i++;
		j = 0;
	}
	args[o - 1] = '\0';
	return (args);
}
