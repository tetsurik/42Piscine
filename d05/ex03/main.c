/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:35:00 by tri               #+#    #+#             */
/*   Updated: 2020/01/13 20:39:43 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[] = "abababababab";
	char src[] = "babababababa";

	ft_strcpy(dest, src);

	printf("a was once  "abababababab" now it is %s\n", dest);
	printf("b was once  "babababababa" now it is %s\n", src);

}
