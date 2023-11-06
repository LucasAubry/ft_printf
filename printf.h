/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:25:23 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/04 12:29:57 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# define BUFF_SIZE 8192
# define MAX_INT 2147483648


#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int	ft_put_p(unsigned long long ptr);
int	ft_putstr(char *str);
int ft_printstr(char *str);
int	ft_putnbr(int n);
int ft_putdecimalnonsigne(unsigned int n);
int ft_putchar(int c);
int	ft_pourcentage(void);
int ft_printf(const char *src, ...);


#endif