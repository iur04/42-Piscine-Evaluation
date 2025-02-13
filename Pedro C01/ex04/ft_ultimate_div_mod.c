/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:36:07 by peazeved          #+#    #+#             */
/*   Updated: 2025/01/25 21:15:13 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	z;

	x = *a;
	z = *b;
	*a = x / z;
	*b = x % z;
}

int main()
{
    int a = 4;
    int b = 2;

    ft_ultimate_div_mod(&a, &b);

    printf("div = %i\nmod = %i\n", a, b);

    return 0;
}
