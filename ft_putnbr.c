/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 20:01:49 by mblonsky          #+#    #+#             */
/*   Updated: 2024/01/10 19:56:24 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putchar('-');
		count += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		count += ft_putnbr(-n);
	}
	else
	{
		if (n <= 9)
			count += ft_putchar(n + '0');
		else
		{
			count += ft_putnbr(n / 10);
			count += ft_putchar(n % 10 + '0');
		}
	}
	return (count);
}
