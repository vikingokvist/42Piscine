/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:48:41 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/20 18:18:07 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Fourty Two";
	char	dest[8];

//	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));

}*/
