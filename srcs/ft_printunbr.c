/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:56:08 by btan              #+#    #+#             */
/*   Updated: 2023/09/25 12:59:52 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printunbr(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
		ft_printunbr(nb / 10);
	count += ft_printchar(nb % 10);
	return (count);
}
