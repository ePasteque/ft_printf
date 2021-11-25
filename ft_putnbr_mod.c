/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbattest <lbattest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:48:34 by lbattest          #+#    #+#             */
/*   Updated: 2021/11/18 16:13:07 by lbattest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_recursive(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_mod('-');
		n = -n;
	}
	if (n > 9)
		ft_recursive(n / 10);
	ft_putchar_mod(n % 10 + '0');
}

int	ft_putnbr_mod(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_recursive(n);
		return (11);
	}
	ft_recursive(n);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}
