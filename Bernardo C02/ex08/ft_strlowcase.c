/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:51:59 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/03 21:54:47 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{
			str[pos] += 32;
		}
		pos++;
	}
	return (str);
}

/* #include <stdio.h>
int main()
{
	char str[] = "hELLO wORLD1";
	printf("Before the Magic: %s\n", str);
	ft_strlowcase(str);
	printf("TADA: %s", str);
} */