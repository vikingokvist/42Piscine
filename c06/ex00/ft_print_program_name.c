/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:14:19 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/29 12:56:41 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	temp;

	temp = argc;
	while (*argv[0])
	{
		write(1, argv[0], 1);
		argv[0]++;
	}
	write(1, "\n", 1);
}
