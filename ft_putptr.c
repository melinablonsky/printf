/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 19:22:09 by mblonsky          #+#    #+#             */
/*   Updated: 2024/01/10 20:04:16 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long hexa)
{
	int	count;

	count = 0;
	if (hexa >= 16)
	{
		count += ft_puthexa(hexa / 16);
		count += ft_puthexa(hexa % 16);
	}
	else
	{
		if (hexa <= 9)
			count += ft_putchar(hexa + '0');
		else
			count += ft_putchar(hexa - 10 + 'a');
	}
	return (count);
}

int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthexa(ptr);
	return (count);
}
