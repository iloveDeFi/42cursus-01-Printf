/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistebessard <baptistebessard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:17:52 by baptistebes       #+#    #+#             */
/*   Updated: 2022/12/07 17:17:53 by baptistebes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		i++;
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			write (1, "-", 1);
			i++;
		}
		if (n > 9)
			ft_putnbr(n / 10);
		ft_putchar((n % 10 + '0'));
	}
	i += ft_strlen_int(n);
	return (i);
}
