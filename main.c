/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:18:37 by mblonsky          #+#    #+#             */
/*   Updated: 2024/02/03 16:58:33 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	result_o;
	int	result_m;

	result_o = printf("printf c orig: %c %c %c %c\n", 'm', '1', ' ', '#');
	result_m = ft_printf("printf c mine: %c %c %c %c\n", 'm', '1', ' ', '#');
	printf("return orig: %i\n", result_o);
	printf("return mine: %i\n", result_m);
	result_o = printf("printf s orig: %s\n", "special c ¢@#|∞≠çñäêó$&¿?¡!");
	result_m = ft_printf("printf s mine: %s\n", "special c ¢@#|∞≠çñäêó$&¿?¡!");
	printf("return orig: %i\n", result_o);
	printf("return mine: %i\n", result_m);
	result_o = printf("printf d orig: %ld %d\n", -2147483648, 2147483647);
	result_m = ft_printf("printf d mine: %d %d\n", -2147483648, 2147483647);
	printf("return orig: %i\n", result_o);
	printf("return mine: %i\n", result_m);
	result_o = printf("printf i orig: %li %i\n", -2147483648, 2147483647);
	result_m = ft_printf("printf i mine: %i %i\n", -2147483648, 2147483647);
	printf("return orig: %i\n", result_o);
	printf("return mine: %i\n", result_m);
	result_o = printf("printf u orig: %ld\n", 4294967295);
	result_m = ft_printf("printf u mine: %u\n", 4294967295);
	printf("return orig: %i\n", result_o);
	printf("return mine: %i\n", result_m);
	result_o = printf("printf perc orig: %%\n");
	result_m = ft_printf("printf perc mine: %%\n");
	printf("return orig: %i\n", result_o);
	printf("return mine: %i\n", result_m);
	result_o = printf("printf ptr orig: %p %p %p %p %p %p\n", (void *)32, (void *)-32, (void *)-32323232, (void *)32323232, (void *)2147483648, (void *)-2147483648);
	result_m = ft_printf("printf ptr mine: %p %p %p %p %p %p\n", (void *)32, (void *)-32, (void *)-32323232,(void *)32323232, (void *)2147483648, (void *)-2147483648);
	printf("return orig: %i\n", result_o);
	printf("return mine: %i\n", result_m);

	return (0);
}
