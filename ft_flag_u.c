/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:16:19 by polpi             #+#    #+#             */
/*   Updated: 2023/01/20 18:24:59 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_u(unsigned int nbr)
{
	int	len;

	len = 0;
	len = ft_unsigned_putnbr(nbr);
	if (nbr == 0)
		return (len + 1);
	return (len);
}
