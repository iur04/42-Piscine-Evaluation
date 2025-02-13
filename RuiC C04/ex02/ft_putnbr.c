/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 02:44:51 by rucosta           #+#    #+#             */
/*   Updated: 2025/02/05 22:03:58 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	buffer[11];
	int		i;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		buffer[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while (--i >= 0)
		write(1, &buffer[i], 1);
}

 int main(void)
{
	ft_putnbr(-2147483648);
	return 0;
}
