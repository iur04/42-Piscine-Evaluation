/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquiaios <mquiaios@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-12 13:35:32 by mquiaios          #+#    #+#             */
/*   Updated: 2025-02-12 13:35:32 by mquiaios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

/* 
int main(void)
{
	#include <stdio.h>
	printf("%d ", ft_fibonacci(-1));
	printf("%d ", ft_fibonacci(0));
	printf("%d ", ft_fibonacci(1));
	printf("%d ", ft_fibonacci(2));
	printf("%d ", ft_fibonacci(5));
	printf("%d ", ft_fibonacci(10));
	printf("%d ", ft_fibonacci(20));
	return (0);
}
 */