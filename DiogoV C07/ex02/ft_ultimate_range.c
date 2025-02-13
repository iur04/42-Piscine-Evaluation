/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dviegas <dviegas@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:22:12 by dviegas           #+#    #+#             */
/*   Updated: 2025/02/02 16:42:29 by dviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int	*range;
// 	int	min;
// 	int	max;
// 	int	i;

// 	min = 5;
// 	max = 10;
// 	printf ("SIZE: %d\n", ft_ultimate_range(&range, min, max));
// 	i = 0;
// 	printf ("OUTPUT:\n");
// 	while (i < (max - min))
// 	{
// 		printf ("%d \n", range[i]);
// 		i++;
// 	}

// 	return (0);
// }
