/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:59:21 by jleal             #+#    #+#             */
/*   Updated: 2025/02/06 12:57:44 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int min = 1;
	int max = 10;
	int *nbrs = ft_range(min, max);

	while (*nbrs)
	{
		printf("%d ", *nbrs);
		nbrs++;
	}
	return (0);
}

int	*ft_range(int min, int max)
{
	int	*nbrs;
	int	*inc;

	if (min >= max)
		return (NULL);
	nbrs = (int *)malloc((max - min) * sizeof(int));
	if (!nbrs)
		return (NULL);
	inc = nbrs;
	while (min < max)
	{
		*inc = min;
		min++;
		inc++;
	}
	return (nbrs);
}
