/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:29:09 by hsousa            #+#    #+#             */
/*   Updated: 2025/02/04 21:26:05 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int main()
// {
// 	char str[] = "Churri";
// 	char str1[] = "Chimi";
// 	ft_strcmp(str, str1);
// 	printf ("Valor da comparacao: %d", ft_strcmp(str, str1));
// }

void	test_strcmp(char *s1, char *s2)
{
	int	result = ft_strcmp(s1, s2);

	printf("\"%s\" vs \"%s\" -> ", s1, s2);

	if (result == 0)
		printf("Equal (0)\n");
	else if (result < 0)
		printf("\"%s\" is smaller (%d)\n", s1, result);
	else
		printf("\"%s\" is greater (%d)\n", s1, result);
}
void	test_strcmp(char *s1, char *s2);
int	main(void)
{
	test_strcmp("hello", "hello");
	test_strcmp("abc", "abcd");
	test_strcmp("test", "tesla");
	test_strcmp("24", "42");
	return (0);
}
