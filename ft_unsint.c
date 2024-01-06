/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:42:19 by mblonsky          #+#    #+#             */
/*   Updated: 2024/01/06 14:58:23 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsint(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar('0' + n);
	else
	{
		count += ft_unsint(n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	return (count);
}
