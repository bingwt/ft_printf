/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:26:37 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 11:38:29 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printhex(int n, ...)
{
	va_list	lst;
	int	count;

	va_start(lst, n);
	count = 0;
	if (n > 16)
	{
		printhex(n / 16);
		printhex(n % 16);
	}
	else
	{
		if (va_arg(lst, int) == 'X')
			count += printchar("0123456789ABCDEF"[n]);
		else
			count += printchar("0123456789abcdef"[n]);
	}
	return (count);
	va_end(lst);
}
