/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosma <rcosma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:25:05 by rcosma            #+#    #+#             */
/*   Updated: 2025/01/29 13:44:35 by rcosma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 57 && str[i] >= 48)
			i++;
		else
			return (0);
	}
	return (1);
}
