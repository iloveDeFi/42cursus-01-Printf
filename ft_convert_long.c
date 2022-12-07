/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistebessard <baptistebessard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:16:10 by baptistebes       #+#    #+#             */
/*   Updated: 2022/12/07 17:17:09 by baptistebes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_strlen_unsigned_int(unsigned long nbr)
{
	int i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 16;
	}
	return (i);
}

static void ft_putchar_hexa(unsigned long c, char *str)
{
	write(1, &str[c], 1);
}

int ft_convert_hexa(unsigned long nbr, char *str)
{
	int len;

	len = 0;
	if (nbr > 15)
		ft_convert_hexa((nbr / 16), str);
	ft_putchar_hexa((nbr % 16), str);
	len += ft_strlen_unsigned_int(nbr);
	return (len);
}

int ft_convert_long(unsigned long nbr, char *str)
{
	int len;

	len = 2;
	write(1, "0x", 2);
	len += ft_convert_hexa(nbr, str);
	return (len);
}
