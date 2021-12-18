/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fael-bou <fael-bou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:21:42 by fael-bou          #+#    #+#             */
/*   Updated: 2021/12/18 17:49:39 by fael-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ptr;

	va_start(ptr, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_conversion(ptr, format[i]);
			i++;
			continue ;
		}
		write(1, format + i, 1);
		i++;
		count++;
	}	
	va_end(ptr);
	return (count);
}
/*
#include<stdio.h>
int main()
{
//	char *str = "ahmad";
//	unsigned int b = 4294967294;
//	int c = 15;
//	int *ptr = &c;
//	printf("this is: %s\nhis name is: %u\n",str,b);
//ft_printf("this is: %s\nhis age is: %p\n",str,ptr);
	int p = ft_printf("hexa%X", 1);
	printf("\n%d ",p);
}*/
