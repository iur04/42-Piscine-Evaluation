/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:30:40 by mquiaios          #+#    #+#             */
/*   Updated: 2025/02/12 22:19:17 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (0 < nb)
	{
		res *= (nb);
		nb--;
	}
	return (res);
}


int main(void)
{
	#include <stdio.h>
	int f = ft_iterative_factorial(4);
	printf("%d ", f);
	return 0;
}
