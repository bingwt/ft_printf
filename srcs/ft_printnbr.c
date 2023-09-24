/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:19:37 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 11:26:00 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printnbr(int nb)
{
	size_t	nbr;
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += ft_printchar('-');
		nb = -nb;
	}
	nbr = nb;
	if (nbr > 9)
	{
		ft_printnbr(nbr / 10);
		nbr = nbr % 10;
	}
	count += ft_printchar('0' + nbr);
	return (count);
}
