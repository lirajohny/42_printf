/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:49:31 by jlira             #+#    #+#             */
/*   Updated: 2023/11/29 11:49:34 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if ((format[i] == '%'))
		{
			count += check_argument(format, i, ap);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}

