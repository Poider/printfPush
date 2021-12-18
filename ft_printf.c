/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:24 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:33:43 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	anotherfunction(const char *text, va_list ptr, int *count, int *flag)
{
	if (*text == '%')
	{
		text++;
		if (*text == 's')
			ft_putstr(va_arg(ptr, char *), count, flag);
		if (*text == 'c')
			ft_putchar(va_arg(ptr, int), count, flag);
		else if (*text == 'p')
			ft_print_memo(va_arg(ptr, void *), count, flag);
		else if (*text == 'd' || *text == 'i')
			ft_print_decimal(va_arg(ptr, int), count, flag);
		else if (*text == 'u')
			ft_print_unsigned_int(va_arg(ptr, unsigned int), count, flag);
		else if (*text == 'x')
			ft_print_hex(va_arg(ptr, int), count, flag);
		else if (*text == 'X')
			ft_print_hex_upper(va_arg(ptr, int), count, flag);
		else if (*text == '%')
			ft_putchar('%', count, flag);
	}
}

// while spaces go forward?// nah its a flag l18

int	ft_printf(const char *text, ...)
{
	int		count;
	va_list	ptr;
	int		flag;

	count = 0;
	va_start(ptr, text);
	while (*text)
	{	
		flag = 0;
		if (*text == '%')
		{
			anotherfunction(text, ptr, &count, &flag);
			if (flag == 1)
			text++;
		}
		else
			ft_putchar(*text, &count, &flag);
		if (*text)
		text++;
	}
	va_end(ptr);
	return (count);
}

/*if (*text != /whitespaces) l55 */
// 