/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:09 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:32:49 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_decimal(int n, int *count, int *flag)
{
	unsigned int	nvar;

	*flag = 1;
	nvar = n;
	if (n < 0)
	{
		ft_putchar('-', count, flag);
		nvar = -n;
	}
	if (nvar <= 9)
	{
		ft_putchar(nvar + '0', count, flag);
	}
	if (nvar > 9)
	{
		ft_print_decimal(nvar / 10, count, flag);
		ft_putchar(nvar % 10 + '0', count, flag);
	}
}
