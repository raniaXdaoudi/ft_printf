/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radaoudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:57:13 by radaoudi          #+#    #+#             */
/*   Updated: 2022/01/18 15:20:58 by radaoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(va_list tab)
{
	char	*str;

	str = va_arg(tab, char *);
	if (!str)
		return (write(1, "(null)", 6));
	ft_putstr(str);
	return (ft_strlen(str));
}
