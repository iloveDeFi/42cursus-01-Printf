/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistebessard <baptistebessard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:16:35 by baptistebes       #+#    #+#             */
/*   Updated: 2022/12/07 17:16:39 by baptistebes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flag_d(int c)
{
	int	len;

	len = ft_putnbr(c);
	return (len);
}
