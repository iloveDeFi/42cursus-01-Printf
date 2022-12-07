/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistebessard <baptistebessard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:15:45 by baptistebes       #+#    #+#             */
/*   Updated: 2022/12/07 17:17:06 by baptistebes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_strlen_unsigned_int(unsigned int nbr)
{
	int i;

	i = 0;
	if (nbr == 0)
		i = 1;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 16;
	}
	return (i);
}

void ft_putchar_hexa(unsigned int c, char *str)
{
	write(1, &str[c], 1);
}

int ft_convert_base(unsigned int nbr, char *str)
{
	int len;

	len = 0;
	if (nbr > 15)
		ft_convert_base((nbr / 16), str);
	ft_putchar_hexa((nbr % 16), str);
	len += ft_strlen_unsigned_int(nbr);
	return (len);
}
