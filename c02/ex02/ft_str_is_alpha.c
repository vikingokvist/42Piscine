/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:44:57 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/19 10:45:47 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
        	printf("ERROR! Wrong amount of arguments.\n");
		return 1;
	}

	char	*input_string = argv[1];

	int	result = ft_str_is_alpha(input_string);

	if (result)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}*/
