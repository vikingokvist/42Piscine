/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:33:35 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/26 12:33:36 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	i = 1;
	res = nb;
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb;
	int	power;

	nb = 7;
	power = 2;
	printf("%d\n", ft_iterative_power(nb, power));
}*/
