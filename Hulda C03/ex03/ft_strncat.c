/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsousa <hsousa@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:02:02 by hsousa            #+#    #+#             */
/*   Updated: 2025/02/04 18:35:38 by hsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
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
	char	src[] = "42!42!42!";
	unsigned int	nb = 3;
	
	printf("Destination: \"%s\"\nSource: \"%s\"\n", dest, src);
	ft_strncat(dest, src, nb);
	printf("Concatenation of %d chars: %s\n", nb, dest);
	return (0);
}*/
