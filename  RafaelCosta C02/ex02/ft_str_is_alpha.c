/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:52:42 by racosta           #+#    #+#             */
/*   Updated: 2025/01/29 19:20:05 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int main()
{
int x;
// Test 1: String with only alphabetic characters
char str1[] = "Alpha";
x = ft_str_is_alpha(str1) + '0';
write (1, &x, 1);
printf (" - Alpha\n");// Expected output: 1 (alphabetic characters only)

// Test 2: String containing digits
char str2[] = "123";
x = ft_str_is_alpha(str2) + '0';
write (1, &x, 1);
printf (" - 123\n");// Expected output: 0 (contains digits)

// Test 3: String with spaces and punctuation
char str3[] = "$p&cial !";
x = ft_str_is_alpha(str3) + '0';
write (1, &x, 1);
printf (" - $p&cial !\n");// Expected output: 0

// Test 4: Empty string (considered alphabetic)
char str4[] = "";
x = ft_str_is_alpha(str4) + '0';
write (1, &x, 1);
printf (" - Empty!\n");// Expected output: 1

return 0;
}
