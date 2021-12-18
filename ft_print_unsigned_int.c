/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:21 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:33:01 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned_int(unsigned int n, int *count, int *flag)
{
	*flag = 1;
	if (n <= 9)
	{
		ft_putchar(n + '0', count, flag);
	}
	if (n > 9)
	{
		ft_print_unsigned_int(n / 10, count, flag);
		ft_putchar(n % 10 + '0', count, flag);
	}
}
