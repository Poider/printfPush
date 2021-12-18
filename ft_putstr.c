/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:31 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:33:09 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *c, int *count, int *flag)
{	
	*flag = 1;
	if (!c)
	c = "(null)";
	while (*c)
	{
		ft_putchar(*c, count, flag);
		c++;
	}
}
