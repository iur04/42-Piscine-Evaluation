/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:58:29 by vpinto-g          #+#    #+#             */
/*   Updated: 2025/02/01 20:36:04 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
int main (void)
{
    char str[] = "Ola o meu user e 3vPInto-g";
    printf ("%s", ft_strcapitalize(str));
}
