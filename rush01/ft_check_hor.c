/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_hor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:19:00 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/18 19:19:11 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_backtrack(int *position, int *size, int *value)
{
	if (value != size)
		value++;
	else if (position == 0 && value == size)
		ft_print_error();
	else
		ft_check(position, size, *possible);
}

int     ft_check_hor(int *position, int *size, int possible)
{
	int	i;

	i = 0;
        while (i < size)
        {
                if (position[i] == possible)
                {
                        return (0);
                }
		i++;
        }
	return (1);
}

int     ft_check_vert(int *position, int *size, int possible)
{
        int     i;

        i = 0;
        while (i < size)
        {
                if (position[i + size] == possible)
                {
                        return (0);
                }
        }
	return (1);
}

void    ft_check(int *position, int *size, int possible)
{
        if (ft_check_vert(position, size, possible) 
			&& ft_check_hor(position, size, possible))
	{
		*position = possible;
	}
	else
	{
		position--;
		ft_backtrack(position, size, *value);
	}
}

