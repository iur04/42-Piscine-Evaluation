/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:21:39 by lalima            #+#    #+#             */
/*   Updated: 2025/01/25 19:23:46 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combo(int a, int b, int c)
{
	while (b <= '8')
	{
		c = b + 1;
		while (c <= '9')
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, &c, 1);
			if (a != '7')
			{
				write (1, ", ", 2);
			}
			c++;
		}
		b++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		ft_print_combo(a, b, c);
		a++;
	}
}
int main()
{
	ft_print_comb();
}
