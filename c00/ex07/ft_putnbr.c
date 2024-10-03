/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:23:51 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/19 11:37:21 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	last_digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 0 && nb < 10)
	{
		nb = nb + '0';
		write(1, &nb, 1);
	}
	else if (nb >= 10)
	{
		ft_putnbr((nb / 10));
		last_digit = (nb % 10) + '0';
		write(1, &last_digit, 1);
	}
}
/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/
