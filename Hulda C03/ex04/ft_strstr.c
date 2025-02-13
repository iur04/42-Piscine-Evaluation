/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:21:08 by hsousa            #+#    #+#             */
/*   Updated: 2025/02/04 21:32:07 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>

int main(void)
{
	char	str[] = "Hello, 42 School!";
	char	to_find1[] = "42";
	char	to_find2[] = "Piscine";
	char	*result;

	printf("Original string: \"%s\"\n\n", str);
	//First test: should succeed
	printf("Test 1\nSearching for: \"%s\"\n", to_find1);
	result = ft_strstr(str, to_find1);
	if (result)
		printf("Found: \"%s\"\n\n", result);
	else
		printf("Failed to find string!\n\n");
	//Second test: should fail
	printf("Test 2\nSearching for: \"%s\"\n", to_find2);
	result = ft_strstr(str, to_find2);
	if (result)
		printf("Found: \"%s\"\n", result);
	else
		printf("Failed to find string!\n");
	return (0);
}
