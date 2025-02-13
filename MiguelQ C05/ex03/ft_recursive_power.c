/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquiaios <mquiaios@student.42lisboa.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-12 13:33:45 by mquiaios          #+#    #+#             */
/*   Updated: 2025-02-12 13:33:45 by mquiaios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
}
/* 
int	main(void)
{
	#include <stdio.h>
	printf("%d", ft_recursive_power(-2, 3));
	return (0);
}
 */