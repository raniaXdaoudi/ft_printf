/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radaoudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:11:42 by radaoudi          #+#    #+#             */
/*   Updated: 2022/01/18 17:32:00 by radaoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr(int n);
void	ft_putstr(char *str);
int		check_base(char *base);
int		ft_putchar_fd(char c, int fd);
int		ft_strlen(char *str);
int		ft_size_int(long nb);
int		ft_unsi_putnbr(unsigned long long n, char *base);
int		ft_find_conv(char *str, va_list tab, int i);
int		ft_printf(const char *str, ...);
int		ft_print_char(va_list tab);
int		ft_print_decimal(va_list tab);
int		ft_print_hexa(va_list tab, char c);
int		ft_print_pointeur(va_list tab);
int		ft_print_string(va_list tab);
int		ft_print_unsi(va_list tab);

#endif
