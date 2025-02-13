/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:18:19 by asheykin          #+#    #+#             */
/*   Updated: 2025/01/29 18:43:40 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	prev;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	prev = ft_fibonacci(index - 2);
	return (ft_fibonacci(index - 1) + prev);
}

int main()
{
    int index = 7;  // The index of the Fibonacci sequence
    int result = ft_fibonacci(index);

    if (result == -1)
        printf("Invalid index. Fibonacci sequence is not defined for negative indices.\n");
    else
        printf("The Fibonacci number at index %d is %d\n", index, result);

    return 0;
}

