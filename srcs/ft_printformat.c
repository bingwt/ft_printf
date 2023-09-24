/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:39:19 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 14:37:19 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printformat(int fmt, va_list lst)
{
	int	count;

	count = 0;
	if (fmt == 'c')
		count += ft_printchar(va_arg(lst, int));
	else if (fmt == 's')
		count += ft_printstr(va_arg(lst, char *));
	else if (fmt == 'p')
		count += ft_printhex((unsigned long long) va_arg(lst, void *));
	else if (fmt == 'd' || fmt == 'i')
		count += ft_printnbr(va_arg(lst, int));
	else if (fmt == 'x' || fmt == 'X')
		count += ft_printhex(va_arg(lst, int), fmt);
	else if (fmt == '%')
		count += ft_printchar(fmt);
	return (count);
}

