/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:44:33 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/21 11:44:35 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest + ft_len(dest);
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
 
int	main(void)
{
    char	dest_str[6] = "BBB";
 
    // printing the strings
    printf("||||||||||STRCAT||||||||||||||\n");
    printf("Destin String: %s\n", dest_str);
 
    // printing the return value of the strcmp()
    printf("Return value of ft_strcat(): %s\n", ft_strcat(dest_str, "AAA"));
    printf("||||||||||||||||||||||||||||||\n");
 
    return 0;
}*/
