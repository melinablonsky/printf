/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:18:37 by mblonsky          #+#    #+#             */
/*   Updated: 2023/12/22 16:36:44 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	result;

	result = printf("printf orig: %c\n",'m');
	printf("return orig: %i\n", result);
	result = ft_printf("printf mine: %c\n", 'm');
	printf("return mine: %i\n", result);
	return (0);
}
