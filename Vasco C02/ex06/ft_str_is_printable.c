/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpinto-g <vpinto-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:49:04 by vpinto-g          #+#    #+#             */
/*   Updated: 2025/02/01 15:31:17 by vpinto-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* int main (void)
{
    char str[] = "hello\tworld";
    printf("%d\n", ft_str_is_printable(str));
    char str_non_printable[] = "dlksaj\nsakdjl";
    printf("%d\n", ft_str_is_printable(str_non_printable));
} */