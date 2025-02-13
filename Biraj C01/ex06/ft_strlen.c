/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:34:36 by biphuyal          #+#    #+#             */
/*   Updated: 2025/01/27 23:31:01 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
    // Test 1: Regular string
    char str1[] = "Hello, World!";
    printf("Length of '%s' is: %d\n", str1, ft_strlen(str1));  // Expected output: 13

    // Test 2: Empty string
    char str2[] = "";
    printf("Length of an empty string is: %d\n", ft_strlen(str2));  // Expected output: 0

    // Test 3: String with spaces
    char str3[] = "This is a test";
    printf("Length of '%s' is: %d\n", str3, ft_strlen(str3));  // Expected output: 14

    // Test 4: String with special characters
    char str4[] = "1234!@#$";
    printf("Length of '%s' is: %d\n", str4, ft_strlen(str4));  // Expected output: 8

    // Test 5: String with only one character
    char str5[] = "A";
    printf("Length of '%s' is: %d\n", str5, ft_strlen(str5));  // Expected output: 1

    return 0;
}
