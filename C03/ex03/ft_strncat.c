/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:40:33 by mde-barr          #+#    #+#             */
/*   Updated: 2025/02/10 21:16:59 by mde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 'unsigned int i;' variavel para encontrar o final de dest; 
 * 'Unsigned int j;' variavel para percorrer src;
 * 'while (dest[i])' encontrar o final da string dest
 * 'while (src[j] && j < nb)' copia os caracteres de src para dest, no 
 * maximo nb caracteres
 * 'dest[i] = src[j];' adiciona cada caractere de src no final de dest
 * 'dest[i] = '\0';' adiciona o caractere nulo no final de dest e por fim
 * retorna dest */
