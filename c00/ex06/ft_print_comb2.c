/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:16:00 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/19 14:07:19 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			write(1, &((char){(x / 10) + '0'}), 1);
			write(1, &((char){(x % 10) + '0'}), 1);
			write(1, " ", 1);
			write(1, &((char){(y / 10) + '0'}), 1);
			write(1, &((char){(y % 10) + '0'}), 1);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
