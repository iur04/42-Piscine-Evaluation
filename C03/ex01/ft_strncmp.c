/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:20:39 by mde-barr          #+#    #+#             */
/*   Updated: 2025/02/10 19:42:23 by mde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/* 'while (i < n && s1[i] && s2[i] && s1[i] == s2[i])' primeiro garante que
 * nao serao comparados mais do que n caracteres, de seguida verifica os 
 * caracteres de s1 depois o s2 e por fim faz a comparacao dos caracteres
 * entre s1 e s2 vendo uma a uma o loop so continua se todas forem iguais
 * do momento em que encontar um diferente para.
 * 'if (i == n)' se o loop parou porque alcacou os n caracteres significa 
 * que s1 = s2 e por isso retorna 0.
 * 'return (s1[i] - s2[i]);' caso contrario retorna positivo(se s1 > s2)
 * ou negativo(se s1 < s2) */
