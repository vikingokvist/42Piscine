/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:36:58 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/26 11:37:00 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	n = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
/*#include <stdio.h>

int	main(void)
{
	int	nb;
	
	nb = -5;
	printf("%d\n", ft_iterative_factorial(nb));
}*/
