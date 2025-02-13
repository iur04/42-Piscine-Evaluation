/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:36:42 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/02 22:35:09 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pos;
	int	temp;

	pos = 0;
	while (pos < (size / 2))
	{
		temp = tab[pos];
		tab[pos] = tab[size - 1 - pos];
		tab[size - 1 - pos] = temp;
		pos++;
	}
}

#include <stdio.h>
int main()
{
	int tab[] = {1, 2, 3};
	int size = 3;
	int pos = 0;
	printf("Before the magic ");
	while (pos < size)
	{
		printf("%d ",tab[pos]);
		pos ++;
	}
	pos = 0;
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("TADA ");
	while (pos < size)
	{
		printf("%d ",tab[pos]);
		pos ++;
	}
}
