/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:58:49 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/02 22:36:44 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	pos;
	int	temp;
	int	pos2;

	pos = 0;
	while (pos < size - 1)
	{
		pos2 = 0;
		while (pos2 < size - 1 - pos)
		{
			if (tab[pos2] > tab[pos2 + 1])
			{
				temp = tab[pos2];
				tab[pos2] = tab[pos2 + 1];
				tab[pos2 + 1] = temp;
			}
			pos2 ++;
		}
		pos ++;
	}
}

#include <stdio.h>
int main()
{
	int tab[] = {984, 1000, 1, 54};
	int size =4;
	int pos = 0;
	printf("Before the magic ");
	while(pos < size)
	{
		printf("%d ", tab[pos]);
		pos ++;
	}
	printf("\n");
	pos = 0;
	ft_sort_int_tab(tab, size);
	printf("TADA ");
	while (pos < size)
	{
		printf("%d ", tab[pos]);
		pos ++;
	}
}
