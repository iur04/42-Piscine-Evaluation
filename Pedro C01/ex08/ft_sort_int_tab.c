/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:08:30 by peazeved          #+#    #+#             */
/*   Updated: 2025/01/25 21:30:55 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	step;
	int	temp;

	i = 0;
	step = 0;
	size -= 1;
	while (step < size)
	{
		i = 0;
		while (i < size - step)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		step++;
	}
}

int main()
{
    int tab[] = {19, 6, 89,  10, 1};
    int len = 5;
    ft_sort_int_tab(tab, len);
    int i = 0;

    while(i < 5)
    {
        printf("%i ", tab[i++]);
    }

    return 0;
}

