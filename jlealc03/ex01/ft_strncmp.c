/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:57:30 by jleal             #+#    #+#             */
/*   Updated: 2025/01/29 17:26:57 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char s1[] = "asd";
	char s2[] = "asd876";
	unsigned int mmry;

	mmry = 15;
    printf ("2: %d\n", strncmp(s1, s2, (long unsigned int)mmry));
	printf ("4: %d\n", ft_strncmp(s1, s2, mmry));
    return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
