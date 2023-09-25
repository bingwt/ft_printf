/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:26:37 by btan              #+#    #+#             */
/*   Updated: 2023/09/25 13:59:10 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printhex(unsigned int n, char *base)
{
	if (n > 15)
		ft_printhex(n / 16, base);
	return (ft_printchar(base[n % 16]));
}
