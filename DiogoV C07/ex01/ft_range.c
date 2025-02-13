/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:10:16 by dviegas           #+#    #+#             */
/*   Updated: 2025/02/02 19:31:13 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = 50;
	max = 150;
	array = ft_range(min, max);
	if (array == 0)
	{
		printf("Error: min value is greater than or equal to max value.\n");
		return (1);
	}
	printf("Array elements between %d and %d:\n", min, max);
	for (i = 0; i < max - min; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	free(array);
	return (0);
}
