/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnondecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:24:54 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/04 12:46:18 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int ft_putdecimalnonsigne(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 9)
	{
        ft_putdecimalnonsigne(n / 10);
    }
    ft_putchar((n % 10) + '0');
    count++;
	return (count);
}