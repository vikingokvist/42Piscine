/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 14:19:04 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/23 14:19:07 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minus;
	int	result;
	int	i;

	minus = 0;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (minus % 2 != 0)
		result = -result;
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	char	*str = "   ---+--+1234ab567";
	
	printf("%d", ft_atoi(str));
}*/
