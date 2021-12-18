/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:26 by mel-amma          #+#    #+#             */
/*   Updated: 2021/11/20 15:23:54 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_print_hex(int c, int *count, int *flag);
void	ft_print_memo(void *a, int *count, int *flag);
void	ft_putchar(char c, int *count, int *flag);
void	ft_putstr(char *c, int *count, int *flag);
void	ft_print_decimal(int n, int *count, int *flag);
int		ft_printf(const char *text, ...);
void	ft_print_unsigned_int(unsigned int n, int *count, int *flag);
void	ft_print_hex_upper(int c, int *count, int *flag);
void	anotherfunction(const char *text, va_list ptr, int *count, int *flag);

#endif