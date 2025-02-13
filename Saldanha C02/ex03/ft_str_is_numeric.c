/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:34:52 by sapedro           #+#    #+#             */
/*   Updated: 2025/02/09 16:55:49 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define FALSE 0
#define TRUE 1

int	(is_digit(char c))
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(is_digit(str[i])))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int main()
{
int x;
// Test 1: String with only alphabetic characters
char str1[] = "Alpha";
x = ft_str_is_numeric(str1) + '0';
write (1, &x, 1);
printf (" - Alpha\n");// Expected output: 1 (alphabetic characters only)

// Test 2: String containing digits
char str2[] = "123";
x = ft_str_is_numeric(str2) + '0';
write (1, &x, 1);
printf (" - 123\n");// Expected output: 0 (contains digits)

// Test 3: String with spaces and punctuation
char str3[] = "$p&cial !";
x = ft_str_is_numeric(str3) + '0';
write (1, &x, 1);
printf (" - $p&cial !\n");// Expected output: 0

// Test 4: Empty string (considered alphabetic)
char str4[] = "";
x = ft_str_is_numeric(str4) + '0';
write (1, &x, 1);
printf (" - Empty!\n");// Expected output: 1

return 0;
}
