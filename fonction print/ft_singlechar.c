/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_singlechar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:25:12 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/04 13:20:30 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_pourcentage(void)
{
	write (1, "%", 1);
	return (1);
}
