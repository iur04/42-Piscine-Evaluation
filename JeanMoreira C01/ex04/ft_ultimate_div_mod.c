/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:03:12 by jemoreir          #+#    #+#             */
/*   Updated: 2025/01/27 21:43:34 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;

}

int main ()
{
	int c;
	int d;

	c = 10;
	d = 5;
	ft_ultimate_div_mod(&c, &d);
	printf("o resultado da divisao armazenada e %d\n", c);
	printf("e o resto armazenado e %d\n", d);
}
