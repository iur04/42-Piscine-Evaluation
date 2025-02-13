/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:44:07 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/01/29 21:15:29 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>
int main()
{
	int	a;
	int	b;
	int c;
	int d;

	a = 78;
	b = 10;
	ft_div_mod(a, b, &c, &d);
	printf("Dividing %d by %d results in %d, and %d remains", a, b, c, d);
} */
