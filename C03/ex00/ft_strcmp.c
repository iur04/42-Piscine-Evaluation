/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-barr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:48:12 by mde-barr          #+#    #+#             */
/*   Updated: 2025/02/05 18:16:52 by mde-barr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/* 'while (s1[i] && s2[i] && s1[i] == s2[i])' verifica os caracteres
 * de s1 depois de s2 e por fim compra caracter a caracter o s1 e o
 * s2 enquanto os caracteres de ambas as strings forem iguais e nao
 * chegarem ao final´
 * 'return (s1[i] - s2[i]);' depois da comparacao devolve o resultado
 * consuate for 0(qundo forem iguais), positivo(qunado s1 > s2) e
 * negativo(quando s1 < s2) */
