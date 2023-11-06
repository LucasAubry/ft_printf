/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:53:41 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/04 12:46:09 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	taille_de_p(ft_inp num)
{
	int	taille;

	taille = 0;
	while (num != 0)
	{
		taille++;
		num = num / 16;
	}
	return (taille);
}

void	ft_put_ptr(ft_inp num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_put_p(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		len += taille_de_p(ptr);
	}
	return (len);
}