/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putnbr_mod.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:20:18 by lbattest          #+#    #+#             */
/*   Updated: 2021/11/19 15:31:05 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_recursive(unsigned int n)
{
	if (n > 9)
		ft_unsigned_recursive(n / 10);
	ft_putchar_mod(n % 10 + '0');
}

int	ft_uns_putnbr_mod(unsigned int n)
{
	int	len;

	len = 0;
	ft_unsigned_recursive(n);
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}
