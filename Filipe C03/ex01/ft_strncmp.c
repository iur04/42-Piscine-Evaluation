/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:43:25 by figomes           #+#    #+#             */
/*   Updated: 2025/01/27 20:23:32 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0'
		&& s2[i] != '\0'
		&& s1[i] == s2[i]
		&& i < n)
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *s1 = "AB";
	char *s2 = "ABC";

	printf("Expected(67), Result = %d\n", ft_strncmp(s1, s2, 4));
}
