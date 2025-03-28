/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgameiro <fgameiro@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 03:19:10 by fgameiro          #+#    #+#             */
/*   Updated: 2025/01/27 12:10:42 by fgameiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)                                                              
{
        int a = 10, b=3;
        int div, mod;
 
        ft_div_mod(a, b, &div, &mod);
 
        printf("Divisão: %d, Mod: %d\n", div, mod);
        return 0;
}
*/
