/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfranco <hfranco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:08:31 by hfranco           #+#    #+#             */
/*   Updated: 2025/01/23 23:33:44 by hfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = (n < 0) * 'N' + (n >= 0) * 'P';
	write(1, &c, 1);
}

int	main(int argc, char const *argv[])
{
	ft_is_negative(-5);
	ft_is_negative(5);
	ft_is_negative(0);
	return (0);
}
