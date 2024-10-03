/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:05:30 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/20 18:40:51 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
int	main(void)
{
	int	array[5] = {3, 5, 4, 1, 2};
	
	ft_sort_int_tab(array, 5);
	int x = 0;
	while (x <= size - 1)
	{
		printf("%d", tab[x]);
		x++;
	}
	#include <stdio.h>	
}
