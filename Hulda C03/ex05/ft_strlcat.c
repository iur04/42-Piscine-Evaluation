/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsousa <hsousa@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:21:52 by hsousa            #+#    #+#             */
/*   Updated: 2025/02/04 19:25:31 by hsousa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] != '\0' && dest_len + i < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "42!";
	unsigned int	size = 20;

	unsigned int	result = ft_strlcat(dest, src, size);
	printf("Result: %s\n", dest);
	printf("Total length: %u\n", result);
	return (0);
}*/