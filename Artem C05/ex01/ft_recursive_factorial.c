/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:20:46 by asheykin          #+#    #+#             */
/*   Updated: 2025/01/29 18:38:31 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
    int num = 5;  // You can change this value to test with other numbers
    int result = ft_recursive_factorial(num);

    if (result == 0 && num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("The factorial of %d is %d\n", num, result);

    return 0;
}
