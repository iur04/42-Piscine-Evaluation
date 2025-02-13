/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:41:18 by jleal             #+#    #+#             */
/*   Updated: 2025/01/29 17:37:40 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlen(char *str);
int				ft_str_compare(char *haystack, char *needle);

int main(void)
{
	char str[] = "haynneedleneedlelestack";
	char to_find[] = "needle";
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_str_compare(&str[i], to_find))
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int	ft_str_compare(char *haystack, char *needle)
{
	int	i;

	i = 0;
	while (needle[i] != '\0')
	{
		if (haystack[i] != needle[i])
			return (0);
		i++;
	}
	return (1);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
