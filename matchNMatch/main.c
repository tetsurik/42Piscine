/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tri <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 17:40:08 by tri               #+#    #+#             */
/*   Updated: 2020/01/20 13:28:49 by tri              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		nmatch(char *s1, char *s2);
int 	match(char *s1, char *s2);

int		main(void)
{
	// match.c Test Case
	printf("\n***************************************************\n");
	printf("\n        match.c Test Case - Your Results\n");
	printf("\n***************************************************\n");
	printf("expected 1: %d\n", match("main.c", "*.c"));
	printf("expected 1: %d\n", match("abc123", "abc12*"));
	printf("expected 1: %d\n", match("abc123", "*b*12*"));
	printf("expected 1: %d\n", match("abc123", "abc***"));
	printf("expected 1: %d\n", match("abc123", "***123"));
	printf("expected 0: %d\n", match("main.c", "*.h"));
	printf("expected 0: %d\n", match("abc123", "abc**4"));
	printf("expected 0: %d\n", match("abc123", "abd*23"));
	printf("expected 0: %d\n", match("abc123", "abc*34"));
	printf("expected 0: %d\n", match("abc123", "a****4"));
	// nmatch.c Test Casex
	printf("\n***************************************************\n");
	printf("\n        nmatch.c Test Case - Your Results\n");
	printf("\n***************************************************\n");
	printf("expexted 2: %d\n", nmatch("abcbd", "*b*"));
	printf("expected 3: %d\n", nmatch("abc", "a**"));
	printf("expected 1: %d\n", nmatch("abc123", "abc12*"));
	printf("expected 1: %d\n", nmatch("abc123", "*b*12*"));
	printf("expected 15: %d\n", nmatch("abc1234", "abc***"));
	printf("expected 10: %d\n", nmatch("abc123", "***123"));
	printf("expected 0: %d\n", nmatch("abc123", "abc**4"));
	printf("expected 0: %d\n", nmatch("abc123", "abd*23"));
	printf("expected 0: %d\n", nmatch("abc123", "abc*34"));
	printf("expected 0: %d\n", nmatch("abc123", "a****4"));
	printf("test case expected x: %d\n", nmatch("abc", "***"));

	return (0);
}
