/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:28:49 by lbattest          #+#    #+#             */
/*   Updated: 2021/11/19 15:38:47 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	to_hexa_upper(uint32_t nbr)
{
	int			i;
	uint32_t	n;
	char		str[9];
	char		*hexa;

	hexa = "0123456789ABCDEF";
	n = nbr;
	i = 0;
	if (!n)
		i = 1;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	str[i--] = '\0';
	while (i >= 0)
	{
		str[i] = hexa[nbr % 16];
		nbr = nbr / 16;
		i--;
	}
	return (ft_putstr_mod(str));
}
