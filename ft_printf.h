/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:25:23 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/23 17:51:11 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_nbrbase(unsigned long nbr, char *base, bool ptr);
int	ft_format(va_list args, const char format);
int	ft_printf(const char *format, ...);

#endif