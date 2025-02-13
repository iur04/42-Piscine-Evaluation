/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:36:17 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/03 20:57:40 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	c;
	int		pos;

	pos = 0;
	if (str[pos] == '\0')
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		c = str[pos];
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
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
	char str1[] = "abcdtsjvmvn";
	char str2[] = "hsnc2mbmkm";
	char str3[] = "";
	int i = ft_str_is_alpha(str1);
	int j = ft_str_is_alpha(str2);
	int k = ft_str_is_alpha(str3);
	printf("this one is so it is %d, 
	this one is not so is %d. empty is also %d", i, j, k);
} */