/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:56:03 by jobraga-          #+#    #+#             */
/*   Updated: 2025/01/25 23:05:21 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		a;

	a = 0;
	size = size - 1;
	while (a <= size / 2)
	{
		temp = tab[a];
		tab[a] = tab[size];
		tab[size] = temp;
		a++;
		size--;
	}
}

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Array antes da reversão:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_rev_int_tab(arr, size);  // Chama a função para inverter o array

    printf("Array depois da reversão:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
