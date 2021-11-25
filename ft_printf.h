/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:27:28 by lbattest          #+#    #+#             */
/*   Updated: 2021/11/19 17:29:02 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
int		ft_putchar_mod(char c);
int		ft_putnbr_mod(int n);
int		ft_putstr_mod(char *s);
size_t	ft_strlen(const char *s);
int		ft_uns_putnbr_mod(unsigned int n);
int		to_hexa(uint32_t nbr);
int		to_hexa_upper(uint32_t nbr);
int		adress(uint64_t nbr);

#endif