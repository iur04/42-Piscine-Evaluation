/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:50:20 by jleal             #+#    #+#             */
/*   Updated: 2025/02/06 12:55:17 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char src[] = "Hello World";
	printf("%s\n", ft_strdup(src));
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*sptr;
	char	*dptr;

	sptr = src;
	while (*sptr)
		sptr++;
	dup = (char *)malloc((sptr - src + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	dptr = dup;
	while (*src != '\0')
	{
		*dptr = *src;
		dptr++;
		src++;
	}
	return (dup);
}
