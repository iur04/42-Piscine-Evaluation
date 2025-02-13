/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:59:39 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/03 21:02:19 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	pos;

	pos = 0;
	if (str[pos] == '\0')
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}

/* #include <stdio.h>

int main()
{
	char str1[] = "AVDBFJNJVV";
	char str2[] = "SVKGaVNJMM";
	char str3[] = "";
	int i = ft_str_is_uppercase(str1);
	int j = ft_str_is_uppercase(str2);
	int k = ft_str_is_uppercase(str3);
	printf("this one is so it is %d, this one 
	is not so is %d. empty is also %d", i, j, k);
} */