/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhelpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:12:25 by btan              #+#    #+#             */
/*   Updated: 2023/09/25 21:22:14 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c,1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
		count += ft_printchar(*(str++));
	return (count);
}

int	ft_printnbr(int nb)
{
	size_t nbr;
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_printchar('-');
		nb = -nb;
	}
	nbr = nb;
	if (nbr > 9)
		ft_printnbr(nbr / 10);
	count += ft_printchar('0' + nbr % 10);
	return (count);
}

int	ft_printunbr(unsigned int nb)
{
	int	count;
	if (nb > 9)
		ft_printunbr(nb / 10);
	count += ft_printchar(nb % 10);
	return (count);
}

int	ft_printhex(
