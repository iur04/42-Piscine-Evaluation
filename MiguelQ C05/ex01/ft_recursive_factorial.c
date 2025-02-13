/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:31:51 by mquiaios          #+#    #+#             */
/*   Updated: 2025/02/12 22:20:25 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
	return (1);
}

int main()
{
	int numb = 4;
	ft_recursive_factorial(numb);
	printf ("%d", ft_recursive_factorial(numb));
}
