/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adress.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:07:49 by lbattest          #+#    #+#             */
/*   Updated: 2021/11/19 17:31:55 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	adress(uint64_t nbr)
{
	int			i;
	uint64_t	n;
	char		str[20];
	char		*hexa;

	hexa = "0123456789abcdef";
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
