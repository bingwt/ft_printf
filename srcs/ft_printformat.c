/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:39:19 by btan              #+#    #+#             */
/*   Updated: 2023/09/26 08:43:16 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printformat(int fmt, va_list lst)
{
	int	count;

	count = 0;
	if (fmt == 'c')
		count += ft_printchar(va_arg(lst, int));
	if (fmt == 's')
		count += ft_printstr(va_arg(lst, char *));
	if (fmt == 'p')
	{
		count += ft_printstr("0x");
		count += ft_printaddress(va_arg(lst, unsigned long long), "0123456789abcdef");
	}
	if (fmt == 'd' || fmt == 'i')
		count += ft_printnbr(va_arg(lst, int));
	if (fmt == 'u')
		count += ft_printunbr(va_arg(lst, unsigned int));
	if (fmt == 'x')
		count += ft_printhex(va_arg(lst, long), "0123456789abcdef");
	if (fmt == 'X')
		count += ft_printhex(va_arg(lst, long), "0123456789ABCDEF");
	if (fmt == '%')
		count += ft_printchar(fmt);
	return (count);
}
