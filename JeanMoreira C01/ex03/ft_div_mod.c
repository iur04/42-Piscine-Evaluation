/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemoreir <jemoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:21:09 by jemoreir          #+#    #+#             */
/*   Updated: 2025/01/27 20:08:10 by jemoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main ()
{
	int A;
	int B;
	int a;
	int b;
	

	a = 5;
	b = 2;
	ft_div_mod(a, b, &A, &B);
	printf("O resultado da divisao de %d e %d e %d\n", a, b, A);
	printf("O resto da divisao e de %d\n", B);
}*/