/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bernmart@student.42lisboa.com <bernmart    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:04:02 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/03 20:15:26 by bernmart@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char src[] = "Hello";
	char dest[] = "Good";
	int i = 2;
	ft_strncpy(dest, src, i);
	printf(" '%s'", dest);
} */
