/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:34:06 by btan              #+#    #+#             */
/*   Updated: 2023/09/25 11:23:40 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printaddress(unsigned long long n, char *base)
{
	if (n > 15)
		ft_printaddress(n / 16, base);
	return (ft_printchar(base[n % 16]));
}
