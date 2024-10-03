/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:09:39 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/23 13:24:35 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest + ft_len(dest);
	while (*src != '\0' && i < nb)
	{
		*temp = *src;
		temp++;
		src++;
		i++;
	}
	*temp = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
 
int	main(void)
{
	char	dest_str[6] = "BBBBBB";
	unsigned int	nb;

	nb = 3;

	printf("%s", ft_strncat(dest_str, "AAAAAAAA", nb));
	printf("\n||||||||||||||||||||||||||||||\n");
 
    return 0;
}*/
