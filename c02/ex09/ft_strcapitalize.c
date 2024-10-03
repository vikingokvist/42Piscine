/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:16:36 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/20 17:55:02 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	check = 0;
	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') || i == 0)
			check = 1;
		if (str[i] >= '0' && str[i] <= '9')
			check = 0;
		if ((str[i] >= 'a' && str[i] <= 'z') && (check == 1))
		{
			str[i] -= 32;
			check = 0;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char input_string[] = 
	"salut, comment tu vas ? 42mots quarante- Ddeux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(input_string));
}*/
