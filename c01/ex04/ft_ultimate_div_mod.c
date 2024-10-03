/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:27:51 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/16 10:44:14 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}
/*int	main(void) 
{
	int	a;
	int	b;
	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
}*/
