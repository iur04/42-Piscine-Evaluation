/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsousa <hsousa@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:37:11 by hsousa            #+#    #+#             */
/*   Updated: 2025/02/04 18:27:24 by hsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char	dest[42] = "Hello, ";
	char	src[] = "42!";

	printf("Destination: %s\nSource: %s\n", dest, src);
	ft_strcat(dest, src);
	printf("Concatenation: %s\n", dest);
	return (0);
}*/
