/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radaoudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:44:12 by radaoudi          #+#    #+#             */
/*   Updated: 2022/01/18 15:21:28 by radaoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsi(va_list tab)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = va_arg(tab, unsigned int);
	count += ft_unsi_putnbr((unsigned long long)nb, "0123456789");
	return (count);
}
