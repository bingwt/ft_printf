/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:04:27 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 15:52:01 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printnbr(int nb);
int	ft_printhex(int n, char *base);
int	ft_printformat(int fmt, va_list lst);
int	ft_printf(const char *str, ...);

#endif
