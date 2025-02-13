/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:04:27 by hsousa            #+#    #+#             */
/*   Updated: 2025/02/04 21:27:28 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>

void	test_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result = ft_strncmp(s1, s2, n);

	printf("\"%s\" vs \"%s\" (up to %u chars)  -> ", s1, s2, n);
	if (result == 0)
		printf("Equal (0)\n");
	else if (result < 0)
		printf("\"%s\" is smaller (%d)\n", s1, result);
	else
		printf("\"%s\" is greater (%d)\n", s1, result);
}
void	test_strncmp(char *s1, char *s2, unsigned int n);
int	main(void)
{
	test_strncmp("hello", "hello", 5);
	test_strncmp("abcdef", "abdxyz", 3);
	test_strncmp("24", "2424", 2);
	test_strncmp("banana", "apple", 10);
	return (0);
}
