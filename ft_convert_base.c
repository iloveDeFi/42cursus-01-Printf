/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 18:20:17 by bbessard          #+#    #+#             */
/*   Updated: 2023/01/24 15:58:57 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unsigned_int(unsigned int nbr)
{
	int	i;

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

void	ft_putchar_hexa(unsigned int c, char *str)
{
	write (1, &str[c], 1);
}

int	ft_convert_base(unsigned int nbr, char *str)
{
	int	len;

	len = 0;
	if (nbr > 15)
		ft_convert_base((nbr / 16), str);
	ft_putchar_hexa((nbr % 16), str);
	len += ft_strlen_unsigned_int(nbr);
	return (len);
}
