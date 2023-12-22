/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:41:03 by mblonsky          #+#    #+#             */
/*   Updated: 2023/12/22 16:32:45 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
# include <unistd.h>

int	ft_putchar(char c)
{
	int	count;

	count = 0;
	count += write(1, &c, 1);
	return (count);
}
