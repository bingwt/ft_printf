/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:19:37 by btan              #+#    #+#             */
/*   Updated: 2023/09/26 08:25:46 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printnbr(int nb)
{
	long	nbr;
	int	count;

	count = 0;
	nbr = nb;
	if (nbr < 0)
	{
		count += ft_printchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		count += ft_printnbr(nbr / 10);
		nbr = nbr % 10;
	}
	count += ft_printchar('0' + nbr);
	return (count);
}
