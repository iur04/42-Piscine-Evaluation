/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:21:37 by jleal             #+#    #+#             */
/*   Updated: 2025/02/06 13:16:16 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_atoi_base(char *str, char *base);
int		is_in_base(char c, char *base);
int		ft_strlen(char *str);
int		base_fltr(char *base);
int		ft_intlen(int nb, int base);
void	ft_putnbrstr(int nb, char *base, char *newnbr, int i);
char	*ft_itoa_base(int nb, char *base);
int		ft_checkdup(char *str);

int main(void)
{
	char *result;

	// Test Case 1: Binary to Decimal
	result = ft_convert_base("1010", "01", "0123456789");
	printf("Binary 1010 to Decimal: %s\n", result);
	free(result);

	// Test Case 2: Decimal to Hexadecimal
	result = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
	printf("Decimal 255 to Hexadecimal: %s\n", result);
	free(result);

	// Test Case 3: Hexadecimal to Binary
	result = ft_convert_base("FF", "0123456789ABCDEF", "01");
	printf("Hexadecimal FF to Binary: %s\n", result);
	free(result);

	// Test Case 4: Octal to Decimal
	result = ft_convert_base("77", "01234567", "0123456789");
	printf("Octal 77 to Decimal: %s\n", result);
	free(result);

	// Test Case 5: Decimal to Custom Base
	result = ft_convert_base("100", "0123456789", "abcdefghij");
	printf("Decimal 100 to Base 'abcdefghij': %s\n", result);
	free(result);

	// Test Case 6: Negative Number (Decimal to Binary)
	result = ft_convert_base("-42", "0123456789", "01");
	printf("Decimal -42 to Binary: %s\n", result);
	free(result);

	// Test Case 7: Invalid Base (Repeating Characters)
	result = ft_convert_base("123", "1123456789", "01");
	printf("Invalid Base Test (should return NULL): %s\n", result);

	// Test Case 8: Single Character Base (Invalid)
	result = ft_convert_base("5", "5", "0123456789");
	printf("Single Character Base Test (should return NULL): %s\n", result);

	return 0;
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp;
	char	*result;

	if (!base_fltr(base_from) || !base_fltr(base_to))
		return (NULL);
	temp = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(temp, base_to);
	if (!result)
		return (NULL);
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	p;
	int	num;
	int	base_len;
	int	i;

	base_len = ft_strlen(base);
	p = 1;
	num = 0;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			p *= -1;
		str++;
	}
	while ((is_in_base(*str, base)) != -1)
	{
		i = is_in_base(*str, base);
		num = num * base_len + i;
		str++;
	}
	return (num * p);
}

int	ft_intlen(int nb, int base)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb)
	{
		nb /= base;
		i++;
	}
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
