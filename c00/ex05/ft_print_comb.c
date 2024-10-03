/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:31:58 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/12 12:03:07 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	singles;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			singles = tens + 1;
			while (singles <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &singles, 1);
				if (hundreds != '7' || tens != '8' || singles != '9')
					write(1, ", ", 2);
				singles++;
			}
			tens++;
		}
		hundreds++;
	}
}

/*int     main(void)
{
      ft_print_comb();  
}*/
