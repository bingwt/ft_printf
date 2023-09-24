/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:26:37 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 15:52:17 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printhex(int n, char *base)
{
	if (n > 16)
	{
		ft_printhex(n / 16, base);
		ft_printhex(n % 16, base);
	}
	else
		return (ft_printchar(base[n]));
	return (0);
}
