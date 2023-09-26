/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:56:08 by btan              #+#    #+#             */
/*   Updated: 2023/09/26 08:50:35 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printunbr(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
		count += ft_printunbr(nb / 10);
	count += ft_printchar('0' + nb % 10);
	return (count);
}
