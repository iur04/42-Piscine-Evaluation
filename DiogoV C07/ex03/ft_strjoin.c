/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:42:37 by dviegas           #+#    #+#             */
/*   Updated: 2025/02/02 19:39:04 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	sep_len;
	int	total_len;

	i = 0;
	sep_len = ft_strlen(sep);
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*text;
	int		k;
	int		total_len;

	k = 0;
	total_len = (ft_total_size(size, strs, sep) + 1);
	text = (char *)malloc(sizeof(char) * total_len);
	if (text == NULL)
		return (0);
	*text = 0;
	while (k < size)
	{
		ft_strcat(text, strs[k]);
		if (k < size)
		{
			ft_strcat(text, sep);
		}
		k++;
	}
	return (text);
}

int	main(void)
{
#include <stdio.h>

	int size = 6;
	char *strs[] = {"Hello", "Pisciner", "Dont", "Panic","Keep","Swimming"};
	char sep[] = "--->";

	printf("OUTPUT: %s\n", ft_strjoin(size, strs, sep));
	free(ft_strjoin(size, strs, sep));
	return (0);
}
