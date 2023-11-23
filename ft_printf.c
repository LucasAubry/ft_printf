/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:25:14 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/23 17:54:19 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format);
{
	int	len;

	len = 0;
	if (ft_return == 'c')
		len += ft_putchar(va_arg(list, int));
	else if (ft_return == 's')
		len += ft_putstr(va_arg(list, char *));
	else if (ft_return == 'p')
		len += ft_put_p(va_arg(list, unsigned long long));
	else if (ft_return == 'd' || ft_return == 'i')
		len += ft_putnbr(va_arg(list, int));
	else if (ft_return == 'u')
		len += ft_putdecimalnonsigne(va_arg(list, unsigned int));
	/*else if (ft_return == 'x' || ft_return == 'X')
		len += ft_put_xX(va_arg(list, unsigned int), len);///////*/
	else if (ft_return == '%')
		len += ft_pourcentage();
	return (len);
}

int	ft_printf(const char *format, ...);
{
	int i;
	va_list list;
	int	len;

	i = 0;
	len = 0;
	va_start(list, src);
	while (src[i])
	{
		if (src[i] == '%')
		{
			len += ft_verif(list, src[i + 1]);
			i++;
		}
		else
			len += ft_putchar(src[i]);
		i++;
	}
	va_end (list);
	return (len);
}