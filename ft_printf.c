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

static int	printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	printstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
		count += printchar(*(str++));
	return (count);
}

static int	printnbr(int nb)
{
	size_t	nbr;
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += printchar('-');
		nb = -nb;
	}
	nbr = nb;
	if (nbr > 9)
	{
		printnbr(nbr / 10);
		nbr %= 10;
	}
	count += printchar('0' + nbr);
	return (count);
}

static void	dec_to_hex(int n)
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
	int	count;

	va_start(lst, str);
	i = 0;
	count = 0;
	while (str[i])
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				count += printchar((unsigned char) va_arg(lst, int));
				i++;
			}
			else if (str[i] == 's')
			{
				count += printstr(va_arg(lst, char *));
				i++;
			}
			else if (str[i] == 'p')
			{
				dec_to_hex((unsigned long) va_arg(lst, void *));
				i++;
			}
			else if (str[i] == 'd' || str[i] == 'i')
			{
				count += printnbr(va_arg(lst, int));
				i++;
			}
			else if (str[i] == 'x' || str[i] == 'X')
			{
				dec_to_hex(va_arg(lst, int));
				i++;
			}
			else if (str[i] == '%')
			{
				count += printchar('%');
				i++;
			}
		}
		else
			count += printchar(str[i++]);
	va_end(lst);
	return (count);
}
