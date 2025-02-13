/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:20:53 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/01/29 22:11:34 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* #include <stdio.h>
int main()
{
	int	a;
	int	b;

	a = 86;
	b = 10;
	printf("Divide %d by %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Results in %d and %d remains", a, b);
} */