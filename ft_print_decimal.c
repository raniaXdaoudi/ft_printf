/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radaoudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:38:32 by radaoudi          #+#    #+#             */
/*   Updated: 2022/01/18 15:19:22 by radaoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(va_list tab)
{
	int	count;
	int	nb;

	nb = va_arg(tab, int);
	count = 0;
	count += ft_size_int(nb);
	ft_putnbr(nb);
	return (count);
}
