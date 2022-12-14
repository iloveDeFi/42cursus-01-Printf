/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:17:42 by baptistebes       #+#    #+#             */
/*   Updated: 2022/12/14 17:15:24 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
h c'est le diminutif de header (en-tête).
Un fichier header on define le prototype des fonctions. 
On defini aussi les types personnalisés, les structures et les classes.
*/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_flag_d(int c);
int		ft_strlen_int(int len);
void	ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);
int		ft_check(va_list ap, char check);
int		ft_strlen_int(int nbr);
int		ft_flag_c(int c);
int		ft_flag_s(char *str);
int		ft_unsigned_putnbr(unsigned int nbr);
int		ft_flag_u(unsigned int nbr);
int		ft_flag_prc(int c);
int		ft_convert_base(unsigned int nbr, char *str);
int		ft_convert_long(unsigned long nbr, char *str);

#endif