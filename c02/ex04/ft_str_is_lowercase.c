/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:30:52 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/19 11:31:01 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*#include <stdio.h>

int     main(int argc, char *argv[])
{
        if (argc < 2)
        {
                printf("ERROR! Wrong amount of arguments.\n");
                return 1;
        }

        char    *input_string = argv[1];

        int     result = ft_str_is_lowercase(input_string);

        if (result)
        {
                printf("1\n");
        }
        else
        {
                printf("0\n");
        }
        return 0;
}*/
