/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:43:36 by jobraga-          #+#    #+#             */
/*   Updated: 2025/01/25 22:53:34 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

#include <stdio.h>

int main()
{
    char str[] = "Olá, mundo!";
	int length = ft_strlen(str);
	// Chama a função para calcular o comprimento da string

    printf("O comprimento da string é: %d\n", length);

    return 0;
}
