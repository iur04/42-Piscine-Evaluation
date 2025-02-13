/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 22:38:42 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/01/30 23:01:46 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char src[] = "Hello World";
	char dest[20];
	ft_strcpy(dest, src);
	printf("%s", dest);
} */