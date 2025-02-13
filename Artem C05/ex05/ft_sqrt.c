/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:42:07 by asheykin          #+#    #+#             */
/*   Updated: 2025/01/29 18:46:37 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int	ft_sqrt_recursive(int nb, int guess)
{
	if ((guess * guess <= nb) && ((guess + 1) * (guess + 1) > nb))
		return (guess);
	else if (guess * guess < nb)
	{
		if ((guess + 1) >= 46340)
			return (0);
		return (ft_sqrt_recursive(nb, guess + 1));
	}
	else
		return (ft_sqrt_recursive(nb, guess - 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	if (nb / 2 >= 46340)
		return (0);
	return (ft_sqrt_recursive(nb, nb / 2));
}

int main()
{
    int num = 144;  // The number to find the square root of
    int result = ft_sqrt(num);

    if (result == 0)
        printf("No integer square root found for %d\n", num);
    else
        printf("The square root of %d is %d\n", num, result);

    return 0;
}
