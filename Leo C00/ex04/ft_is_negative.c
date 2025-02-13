/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgribble <lgribble@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 01:09:47 by lgribble          #+#    #+#             */
/*   Updated: 2025/01/25 22:02:29 by lgribble         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;

	if (n < 0)
	{
		x = 'N';
	}
	else
	{
		x = 'P';
	}
	write (1, &x, 1);
}

/*
 int main()
{
	ft_is_negative(5);
	ft_is_negative(0);
	ft_is_negative(-5);
}*/
