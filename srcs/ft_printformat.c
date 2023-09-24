/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:39:19 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 15:50:34 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printformat(int fmt, va_list lst)
{
	if (fmt == 'c')
		return (ft_printchar(va_arg(lst, int)));
	if (fmt == 's')
		return (ft_printstr(va_arg(lst, char *)));
	if (fmt == 'p' || fmt == 'x')
		return (ft_printhex((unsigned long long) va_arg(lst, void *), "0123456789abcdef"));
	if (fmt == 'd' || fmt == 'i')
		return (ft_printnbr(va_arg(lst, int)));
	if (fmt == 'X')
		return (ft_printhex(va_arg(lst, int), "0123456789ABCDEF"));
	if (fmt == '%')
		return (ft_printchar(fmt));
	return (0);
}
