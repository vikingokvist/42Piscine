/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctommasi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:03:53 by ctommasi          #+#    #+#             */
/*   Updated: 2024/08/24 11:03:57 by ctommasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *base)
{
	int	len;

	len = 0;
	while (base[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_check_duplicate(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_valid(char *valid, char *base)
{
	int	i;
	int	j;
	int	check;

	check = 0;
	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (valid[j] != '\0')
		{
			if (valid[j] == base[i])
				check++;
			j++;
		}
		i++;
	}
	if (i == check)
	{
		return (ft_check_duplicate(base));
	}
	return (0);
}

void	ft_print(char nums[])
{
	int	len;

	len = 0;
	while (nums[len] != '\0')
		len++;
	len--;
	while (len >= 0)
	{
		write(1, &nums[len], 1);
		len--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	nums[34];
	int		len;
	int		i;
	long	lnbr;

	if (ft_check_valid("0123456789ABCDEFponeyvif", base) != 0)
	{
		lnbr = nbr;
		if (nbr == 0)
			write(1, &base[0], 1);
		if (nbr < 0)
		{
			lnbr = -(long)nbr;
			write(1, "-", 1);
		}
		len = ft_len(base);
		i = 0;
		while (lnbr > 0)
		{
			nums[i++] = base[(lnbr % len)];
			lnbr = (lnbr / len);
		}
		nums[i] = '\0';
		ft_print(nums);
	}
}
/*int	main(void)
{
	char	*base;
	int	nbr;

//	nbr = 25;	
//	nbr = 0;	
//	nbr = -2147483648;
//	nbr = 2147483647;
//	base = "0123456789";	
//	base = "01";
//	base = "poneyvif";
//	base = "0123456789ABCDEF";
//	base = "xxwx10"
	ft_putnbr_base(nbr, base);
}*/
