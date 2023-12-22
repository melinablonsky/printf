/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblonsky <mblonsky@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:18:37 by mblonsky          #+#    #+#             */
/*   Updated: 2023/12/22 20:25:36 by mblonsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	result;

	result = printf("printf orig\n %c\n %s\n %d\n",'m', "hola", -7777);
	printf("return: %i\n", result);
	result = ft_printf("printf mine\n %c\n %s\n %d\n",'m', "hola", -7777);
	printf("return: %i\n", result);
	return (0);
}
