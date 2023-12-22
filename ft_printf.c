/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:46:45 by mblonsky          #+#    #+#             */
/*   Updated: 2023/12/22 16:26:29 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char *format, va_list variadic_args)
{
	int	count;

	count = 0;
	if (*format == 'c')
	{
		count += ft_putchar(va_arg(variadic_args, int));
	}
	else
	{
		return (0);
	}
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	variadic_args;
	int		count;

	count = 0;
	va_start(variadic_args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += ft_format((char *)format, variadic_args);
		}
		else
		{
			count += ft_putchar(*format);
		}
		format++;
	}
	va_end(variadic_args);
	return (count);
}
