/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:59:50 by asheykin          #+#    #+#             */
/*   Updated: 2025/01/29 18:41:09 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int main()
{
    int nb = 3;       // The base number
    int power = 4;    // The exponent (power)
    int result = ft_iterative_power(nb, power);

    if (result == 0 && power < 0)
        printf("Power cannot be negative.\n");
    else
        printf("%d raised to the power of %d is %d\n", nb, power, result);

    return 0;
}
