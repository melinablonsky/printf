/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:46:45 by mblonsky          #+#    #+#             */
/*   Updated: 2024/01/06 14:41:34 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char *format, va_list variadicargs)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += ft_putchar(va_arg(variadicargs, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(variadicargs, char *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(variadicargs, int));
	else if (*format == '%')
		count += ft_putchar(*format);
	else if (*format == 'u')
		count += ft_unsint(va_arg(variadicargs, unsigned int));
	else
	{
		return (0);
	}
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	variadicargs;
	int		count;

	count = 0;
	va_start(variadicargs, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += ft_format((char *)format, variadicargs);
		}
		else
		{
			count += ft_putchar(*format);
		}
		format++;
	}
	va_end(variadicargs);
	return (count);
}
