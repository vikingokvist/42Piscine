/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:36:51 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/27 17:36:53 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	check;

	if (nb == 0 || nb == 1 || nb < 0)
		return (0);
	check = 0;
	i = 2;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			check = 1;
			break ;
		}
		i++;
	}
	if (check == 0)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb;
	
	nb = 293;
	printf("%d\n", ft_is_prime(nb));
}*/
