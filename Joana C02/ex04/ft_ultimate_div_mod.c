/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:18:54 by jobraga-          #+#    #+#             */
/*   Updated: 2025/01/25 22:52:11 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int *b)
{
	int		div;
	int		mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

#include <stdio.h>

int main()
{
    int a = 15;
    int b = 7;

    printf("Antes da função:\n");
    printf("a = %d, b = %d\n", a, b);

    ft_ultimate_div_mod(&a, &b);

    printf("Depois da função:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
