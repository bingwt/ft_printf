/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:41:29 by btan              #+#    #+#             */
/*   Updated: 2023/09/19 17:45:49 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void dec_to_hex(int n)
{
	if (n > 16)
	{
		dec_to_hex(n / 16);
		dec_to_hex(n % 16);
	}
	else
		ft_putchar_fd("0123456789abcdef"[n], 1);
}

int	ft_printf(const char *str, ...)
{
	va_list lst;
	int	i;

	va_start(lst, str);
	i = 0;
	while (str[i])
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				ft_putchar_fd(va_arg(lst, int), 1);
				i++;
			}
			else if (str[i] == 's')
			{
				ft_putstr_fd(va_arg(lst, char *), 1);
				i++;
			}
			else if (str[i] == 'p')
			{
				dec_to_hex((unsigned long) va_arg(lst, void *));
				i++;
			}
			else if (str[i] == 'd' || str[i] == 'i')
			{
				ft_putnbr_fd(va_arg(lst, int), 1);
				i++;
			}
			else if (str[i] == 'x' || str[i] == 'X')
			{
				dec_to_hex(va_arg(lst, int));
				i++;
			}
			else if (str[i] == '%')
			{
				ft_putchar_fd('%', 1);
				i++;
			}
		}
		else
			ft_putchar_fd(str[i++], 1);
	va_end(lst);
	return (i);
}
