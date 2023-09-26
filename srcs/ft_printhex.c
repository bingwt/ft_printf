/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:26:37 by btan              #+#    #+#             */
/*   Updated: 2023/09/26 08:28:27 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printhex(unsigned int n, char *base)
{
	int	count;

	count = 0;
	if (n > 15)
		count += ft_printhex(n / 16, base);
	count += ft_printchar(base[n % 16]);
	return (count);
}
