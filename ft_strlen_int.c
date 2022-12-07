/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptistebessard <baptistebessard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:18:03 by baptistebes       #+#    #+#             */
/*   Updated: 2022/12/07 17:18:04 by baptistebes      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_strlen_int(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (i + 1);
	while (nbr != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}
