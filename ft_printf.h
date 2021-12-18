/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:05:55 by fael-bou          #+#    #+#             */
/*   Updated: 2021/12/18 16:41:16 by fael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>
#include<unistd.h>

int	ft_printf(const char *format, ...);
int	ft_conversion(va_list ptr, const char specifier);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_put_unsigned_int(unsigned int nb);
int	ft_put_hexa(unsigned long long nb, const char specifier);
int	ft_put_ptr(unsigned long long nb);
