/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <verasjoan587@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:25:04 by jveras            #+#    #+#             */
/*   Updated: 2023/11/29 13:53:40 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static	int	print(char *hex, int i)
{
	int	char_counter;

	char_counter = 0;
	while (i--)
	{
		ft_putchar_fd(hex[i], 1);
		char_counter++;
	}
	return (char_counter);
}

int	ft_upper_hex(unsigned int n)
{
	unsigned long	num;
	int				i;
	char			rem;
	char			hex[8];

	if (n == 0)
		return (ft_putchar_fd('0', 1));
	num = n;
	i = 0;
	while (num > 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = rem + '7';
		num = num / 16;
		i++;
	}
	return (print(hex, i));
}
