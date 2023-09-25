/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:43:59 by btan              #+#    #+#             */
/*   Updated: 2023/09/25 11:45:47 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printunbr(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		ft_printunbr(nb / 10);
		nb = nb % 10;
	}
	count += ft_printchar('0' + nb);
	return (count);
}
