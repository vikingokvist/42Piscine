/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:08:42 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/27 18:08:44 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	check;
	int	check_prime;

	if (nb == 0 || nb == 1 || nb < 0)
		nb = 2;
	check = 0;
	while (check == 0)
	{
		check_prime = 0;
		i = nb;
		while (i >= 1)
		{
			if (nb % i == 0)
				check_prime++;
			i--;
		}
		if (check_prime >= 3)
			nb++;
		else if (check_prime == 2)
			check = 1;
	}
	if (check == 1)
		return (nb);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb;
	
	nb = -12;
	printf("%d\n", ft_find_next_prime(nb));
}*/
