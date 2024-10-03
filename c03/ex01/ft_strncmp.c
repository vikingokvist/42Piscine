/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:22:19 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/26 17:46:34 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
 
int main()
{
    char	first_str[100] = "A";
    char	second_str[100] = "B";
    unsigned int	n = 18;
 
    // printing the strings
    printf("||||||||||STRNCMP||||||||||||||\n");
    printf("First String: %s\n", first_str);
    printf("Secnd String: %s\n", second_str);
    printf("Maxim String: %d\n", n);
    printf("||||||||||||||||||||||||||||||\n");
    printf("Return value of ft_strncmp(): %d\n", 
    ft_strncmp(first_str, second_str, n));
    printf("Return value of strncmp(): %d\n", 
    strncmp(first_str, second_str, n));
    printf("||||||||||||||||||||||||||||||\n");
 
    return 0;
}
