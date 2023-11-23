/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fonction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:57:19 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/23 17:42:21 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == INT_MIN)
		len += ft_putstr("-2147483648");
	else if (n == INT_MAX)
		len += ft_putstr("2147483647");
	else
	{
		if (n < 0)
		{
			len += ft_putchar('-');
			n = -n;
		}
		if (n > 9)
			len += ft_putnbr(n / 10);
		len += ft_putchar((n % 10) + '0');
	}
	return (len);
}

int	ft_putnbr_un(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr_un(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}