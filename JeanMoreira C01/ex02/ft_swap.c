/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemoreir <jemoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:05:23 by jemoreir          #+#    #+#             */
/*   Updated: 2025/01/26 19:59:40 by jemoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{
	int b = 15;
	int d = 20;
	int *a;
	int *c;
	a = &b;
	c = &d;
	printf("a = %d  b = %d\n", *a, *c);
	ft_swap(a,c);
	printf("a = %d  b = %d\n", *a, *c);
}*/