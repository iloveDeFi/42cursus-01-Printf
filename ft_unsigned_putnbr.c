/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistebessard <baptistebessard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:18:08 by baptistebes       #+#    #+#             */
/*   Updated: 2022/12/07 17:18:09 by baptistebes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unsigned_int(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

int	ft_unsigned_putnbr(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr > 9)
		ft_unsigned_putnbr(nbr / 10);
	ft_putchar((nbr % 10 + '0'));
	i += ft_strlen_unsigned_int(nbr);
	return (i);
}
