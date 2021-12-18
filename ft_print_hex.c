/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:15 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:32:55 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_printf.h"

void	ft_print_hex(int c, int *count, int *flag)
{
	unsigned int	newvar;
	char			*base;

	*flag = 1;
	base = "0123456789abcdef";
	newvar = c;
	if (newvar <= 15)
	{
		ft_putchar(base[newvar], count, flag);
	}
	if (newvar > 15)
	{
		ft_print_hex(newvar / 16, count, flag);
		ft_putchar(base[newvar % 16], count, flag);
	}
}
