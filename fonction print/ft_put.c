/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:25:08 by Laubry            #+#    #+#             */
/*   Updated: 2023/11/04 12:46:13 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}



int ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)


	{
		ft_printstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}



int	ft_putnbr(int n)
{
	int		taille;
	char	*num;

	taille = 0;
	num = ft_itoa(n);
	taille = ft_printstr(num);
	free(num);
	return (taille);
}