/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:30:26 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/20 12:30:28 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(unsigned char c)
{
	write(1, &"0123456789abcdef"[c / 16], 1);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((unsigned char)str[i] >= 32 && (unsigned char)str[i] <= 126))
		{
			write(1, "\\", 1);
			ft_hex((unsigned char)str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
/*int	main(void)
{
	char	str[22] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}*/
