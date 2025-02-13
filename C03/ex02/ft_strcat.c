/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:12:22 by mde-barr          #+#    #+#             */
/*   Updated: 2025/02/10 20:39:06 by mde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int i: variavel para encontra o final do dest, int j: variavel para
 * percorrer scr; 'while (dest[i])' encontrar o final da string dest;
 * 'while (scr[j])' copia os caracteres de scr para dest;
 * 'dest[i]=src[j]' adiciona os caracteres de src no final de dest;
 * 'i++'avanca em dest, 'j++' avanca em src.
 * 'dest[i]='\0' adiciona o caracter nulo no final de dest e por fim
 * retorna o ponteiro para dest */
