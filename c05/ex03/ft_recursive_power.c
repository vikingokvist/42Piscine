/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:47:58 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/26 15:48:00 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
/*#include <stdio.h>
int	main(void)
{
	int	nb;
	int	power;
	
	nb = 5;
	power = 5;
	printf("%d\n", ft_recursive_power(nb, power));
}*/
