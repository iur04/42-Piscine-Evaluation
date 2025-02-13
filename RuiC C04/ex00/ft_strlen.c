/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rucosta <rucosta@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 02:32:29 by rucosta           #+#    #+#             */
/*   Updated: 2025/01/30 02:44:01 by rucosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (str[result] != '\0')
	{
		result++;
	}
	return (result);
}

/* int main()
{
    char str[] = "Hello, world!";
    int length = ft_strlen(str);

    printf("The length of the string \"%s\" is %d.\n", str, length);

    return 0;
} */