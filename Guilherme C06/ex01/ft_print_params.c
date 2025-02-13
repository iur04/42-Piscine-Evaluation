/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusilva <gusilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:10:49 by gusilva           #+#    #+#             */
/*   Updated: 2025/02/04 16:32:16 by gusilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 0)
	{
		while (argv[i])
		{
			ft_put_str(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
