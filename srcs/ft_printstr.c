/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42.singapore.sg>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:17:44 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 11:25:39 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_prinf.h"

int	ft_printstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
		count += ft_printchar(*(str++));
	return (count);
}
