/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfranco <hfranco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:56:44 by hfranco           #+#    #+#             */
/*   Updated: 2025/01/23 23:02:29 by hfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = '`';
	while (c < 'z')
	{
		c += 1;
		write (1, &c, 1);
	}
}

/*int	main(int argc, char const *argv[])
{
	ft_print_alphabet();
	return (0);
}*/
