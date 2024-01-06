/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:18:37 by mblonsky          #+#    #+#             */
/*   Updated: 2024/01/06 14:57:41 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	result_o;
	int	result_m;
	
	result_o = printf("printf c orig: %c %c %c %c\n",'m', '1', ' ', '#');
	result_m = ft_printf("printf c mine: %c %c %c %c\n",'m', '1', ' ', '#');
	result_o = printf("printf string orig: %s\n","Hello special characters ¢@#|∞≠çñäêó$&¿?¡!");
	result_m = ft_printf("printf string mine: %s\n","Hello special characters ¢@#|∞≠çñäêó$&¿?¡!");
	result_o = printf("printf d orig: %d %d %ld %d\n", -1234, 1234, -2147483648, 2147483647);
	result_m = ft_printf("printf d mine: %d %d %d %d\n", -1234, 1234, -2147483648, 2147483647);
	result_o = printf("printf i orig: %i %i %li %i\n", -1234, 1234, -2147483648, 2147483647);
	result_m = ft_printf("printf i mine: %i %i %i %i\n", -1234, 1234, -2147483648, 2147483647);
	result_o = printf("printf u orig: %u\n", -1);
	result_m = ft_printf("printf u mine: %u\n", -1);
	result_o = printf("printf perc orig: %%\n");
	result_m = ft_printf("printf perc mine: %%\n");
	printf("return orig: %i\n", result_o);	
	printf("return mine: %i\n", result_m);
	return (0);
}
