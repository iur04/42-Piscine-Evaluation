/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:45:42 by asheykin          #+#    #+#             */
/*   Updated: 2025/01/29 18:35:39 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res *= nb--;
	}
	return (res);
}
 int main()
{
    int num = 5;  // Você pode alterar esse valor para testar com outros números.
    int result = ft_iterative_factorial(num);

    if (result == 0 && num < 0)
        printf("Fatorial não definido para números negativos.\n");
    else
        printf("O fatorial de %d é %d\n", num, result);

    return 0;
}
