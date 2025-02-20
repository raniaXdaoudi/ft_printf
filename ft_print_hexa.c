/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radaoudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:56:48 by radaoudi          #+#    #+#             */
/*   Updated: 2022/01/18 15:19:56 by radaoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(va_list tab, char c)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = va_arg(tab, unsigned int);
	if (c == 'x')
		count += ft_unsi_putnbr((unsigned long long)nb, "0123456789abcdef");
	else if (c == 'X')
		count += ft_unsi_putnbr((unsigned long long)nb, "0123456789ABCDEF");
	return (count);
}
