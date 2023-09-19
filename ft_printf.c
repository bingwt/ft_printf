/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:41:29 by btan              #+#    #+#             */
/*   Updated: 2023/09/19 17:45:49 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <ft_printf.h>

static int	va_argc()
{
	int	argc;

	argc = 0;
	while (*str)
	{
		if (ft_strchr("%", *str))
			argc++;
		ptr++;
	}
}

int	ft_printf(const char *str, ...)
{
	char	*ptr;
	int	pos;
	//va_list lst;

	//va_start(lst, str);

	//va_end(lst);

	ptr = str;
	pos = ft_strchr(ptr, '%') - str;
	return (pos);
}
