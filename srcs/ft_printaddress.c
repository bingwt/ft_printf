/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:34:06 by btan              #+#    #+#             */
/*   Updated: 2023/09/26 08:45:02 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printaddress(unsigned long long n, char *base)
{
	int	count;

	count = 0;

	if (n == 0)
		count += ft_printstr("(nil)");
	if (n > 15)
		count += ft_printaddress(n / 16, base);
	count += ft_printchar(base[n % 16]);
	return (count);
}
