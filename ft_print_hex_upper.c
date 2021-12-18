/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:12 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:33:27 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_printf.h"

void	ft_print_hex_upper(int c, int *count, int *flag)
{
	unsigned int	newvar;
	char			*base;

	*flag = 1;
	base = "0123456789ABCDEF";
	newvar = c;
	if (newvar <= 15)
	{
		ft_putchar(base[newvar], count, flag);
	}
	if (newvar > 15)
	{
		ft_print_hex_upper(newvar / 16, count, flag);
		ft_putchar(base[newvar % 16], count, flag);
	}
}
