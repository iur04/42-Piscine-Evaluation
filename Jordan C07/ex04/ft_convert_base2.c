/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleal <jleal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:21:40 by jleal             #+#    #+#             */
/*   Updated: 2025/02/05 14:09:47 by jleal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_atoi_base(char *str, char *base);
int		is_in_base(char c, char *base);
int		ft_strlen(char *str);
int		base_fltr(char *base);
int		ft_intlen(int nb, int base);
void	ft_putnbrstr(int nb, char *base, char *newnbr, int i);
char	*ft_itoa_base(int nb, char *base);
int		ft_checkdup(char *str);

char	*ft_itoa_base(int nb, char *base)
{
	int		base_val;
	int		i;
	char	*output;

	base_val = ft_strlen(base);
	i = ft_intlen(nb, base_val);
	output = (char *) malloc(ft_intlen(nb, base_val) + 1);
	if (!output)
		return (NULL);
	ft_putnbrstr(nb, base, output, i);
	output[i] = '\0';
	return (output);
}

void	ft_putnbrstr(int nb, char *base, char *newnbr, int i)
{
	int		base_val;

	base_val = ft_strlen(base);
	if (nb == 0)
	{
		newnbr[i] = base[0];
		return ;
	}
	if (nb < 0)
	{
		newnbr[0] = '-';
		nb = -nb;
	}
	newnbr[i--] = '\0';
	while (nb)
	{
		newnbr[i--] = base[nb % base_val];
		nb /= base_val;
	}
}

int	base_fltr(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (ft_checkdup(base));
}

int	ft_checkdup(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
