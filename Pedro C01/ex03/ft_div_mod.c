/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:21:57 by peazeved          #+#    #+#             */
/*   Updated: 2025/01/25 21:12:55 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
    int a = 4;
    int b = 2;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("div = %i\nmod = %i\n", div, mod);

    return 0;
}
