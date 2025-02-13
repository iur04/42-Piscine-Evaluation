/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 21:56:34 by jobraga-          #+#    #+#             */
/*   Updated: 2025/01/25 22:51:39 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>

int main()
{
    int a = 25;
    int b = 4;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Divisão: %d\n", div);
    printf("Resto: %d\n", mod);

    return 0;
}
