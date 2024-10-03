/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:15:48 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/23 11:15:56 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					break ;
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[100] = "urghnw45tifr yn4w098ndp if rpcmwtdpcmnfvpi";
	char	to_find[4] = "";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));

}*/
