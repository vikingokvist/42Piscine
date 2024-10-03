/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:26:03 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/26 17:48:33 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*#include <stdio.h>

int main()
{
    char* first_str = "qesktuglkmkhvkkhv";
    char* second_str = "asdfghjnbvcfghjkmnb";
 
    // printing the strings
    printf("FT_STRCMP\n");
    printf("First String: %s\n", first_str);
    printf("Second String: %s\n", second_str);
 
    // printing the return value of the strcmp()
    printf("Return value of ft_strcmp(): %d", ft_strcmp(first_str, second_str));
 
    return 0;
}*/
