/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 16:09:26 by tri               #+#    #+#             */
/*   Updated: 2020/01/17 16:45:04 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ((str[i] - 97 + 42) % 26) + 97;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ((str[i] - 65 + 42) % 26) + 65;
		++i;
	}
	return (str);
}
