/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:32:43 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/03 21:50:46 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
		{
			str[pos] -= 32;
		}
		pos++;
	}
	return (str);
}

/* #include <stdio.h>
int main()
{
	char str[] = "Hello World1";
	printf("Before the Magic: %s\n", str);
	ft_strupcase(str);
	printf("TADA: %s", str);
} */