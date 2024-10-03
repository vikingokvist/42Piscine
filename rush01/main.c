/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:18:00 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/18 19:18:15 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve_x(int cols[][6]);
void	solve_y(int rows[][6]);

int	string_to_int(char *str) 
{
	int	num;
	
	num = 0;
	while (*str != '\0') 
	{
		num = num * 10 + (*str - '0');
		str++;
	}
            	return num;
}

int	main(int argc, char *argv[])
{
	char	*error;
	
	error = "Error, not the right amount of arguments";
	if (argc != 16)
	{
		while (*error != '\0')
		{
			write(1, error, 1);
			error++;
		}
	}
	else
	{
		int	cols[4][6];
		int	rows[4][6];
		int	i;
        

		i = 0;
		while (i < 4)
		{
			cols[i][0] = string_to_int(argv[i + 1]);
			cols[i][1] = 0;
			cols[i][2] = 0;
			cols[i][3] = 0;
			cols[i][4] = 0;
			cols[i][5] = string_to_int(argv[i + 5]);
			rows[i][0] = string_to_int(argv[i + 9]);
			rows[i][1] = 0;
			rows[i][2] = 0;
			rows[i][3] = 0;
			rows[i][4] = 0;
			rows[i][5] = string_to_int(argv[i + 13]);
			i++;
		}
		solve_x(cols);
		solve_y(rows);
		
	}
	return (0);
}
// accepts parameters to send to rush01 to be sent to solve_x && solve_y 
// returns error if too many arguments
