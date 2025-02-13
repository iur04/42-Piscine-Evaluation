/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:20:56 by jleal             #+#    #+#             */
/*   Updated: 2025/02/06 13:01:29 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int **range = (int**)malloc(sizeof(int));
	int min = 1;
	int max = 10;

	printf("%d ", ft_ultimate_range(range, min, max));
	return (0);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*inc;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	inc = *range;
	while (min < max)
	{
		*inc = min;
		min++;
		inc++;
	}
	return (size);
}
