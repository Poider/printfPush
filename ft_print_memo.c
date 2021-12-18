/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:18 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:32:58 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex_memo(long unsigned int c, int *count, int *flag)
{
	long unsigned int	newvar;
	char				*base;

	*flag = 1;
	base = "0123456789abcdef";
	newvar = c;
	if (c < 0)
	{
		ft_putchar('-', count, flag);
		newvar = -c;
	}
	if (newvar <= 15)
	{
		ft_putchar(base[newvar], count, flag);
	}
	if (newvar > 15)
	{
		ft_print_hex_memo(newvar / 16, count, flag);
		ft_putchar(base[newvar % 16], count, flag);
	}
}

void	ft_print_memo(void *a, int *count, int *flag)
{
	long unsigned int	c;

	c = (long unsigned int)a;
	ft_putstr("0x", count, flag);
	ft_print_hex_memo(c, count, flag);
}
