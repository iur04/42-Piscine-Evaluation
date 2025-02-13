/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:21:37 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/01/29 20:29:17 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* #include <stdio.h>
int main()
{
    int i = 3;
    int j = 5;
    printf("Before %d and %d \n", i, j);
    ft_swap(&i, &j);
    printf("After %d and %d \n", i, j);
} */
