/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 16:30:08 by jemoreir          #+#    #+#             */
/*   Updated: 2025/01/27 21:34:12 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
    int var = 15;
    int *nbr;
    nbr = &var;
    ft_ft(nbr);
    printf("coteudo apontado %d\n", *nbr);
    printf("endereco apontado %p\n", nbr);
    printf("endereco de var %p\n", &var);
}
