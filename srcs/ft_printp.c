/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:08:56 by btan              #+#    #+#             */
/*   Updated: 2023/09/26 10:08:58 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printp(unsigned long long n, char *base)
{
	int	count;

	count = 0;
	if (n == 0)
		count += ft_printstr("(nil)");
	else
	{
		count += ft_printstr("0x");
		count += ft_printhex(n, base);
	}
	return (count);
}
