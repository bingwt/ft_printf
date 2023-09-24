/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:41:29 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 16:03:12 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list lst;
	int	count;

	va_start(lst, str);
	count = 0;
	while (*str)
		if (*str == '%')
		{
			count += ft_printformat(*(++str), lst);
			str++;
		}
		else
			count += ft_printchar(*(str++));
	va_end(lst);
	return (count);
}
