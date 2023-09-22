/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:17:27 by btan              #+#    #+#             */
/*   Updated: 2023/09/19 17:17:46 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	main()
{
	//ft_printf("Hello World\n");
	//ft_printf("Hello %cWorld\n", 'W');
	//ft_printf("Hello %cWorld%s\n", 'W', " 123");
	//ft_printf("Hello %cWorld%s %d\n", 'W', " 123", 456);
	//ft_printf("Hello %cWorld%s %d%i\n", 'W', " 123", 456, -789);
	//printf("Hello %cWorld%s %d%i%x\n", 'W', " 123", 456, -789, 10);
	//ft_printf("Hello %cWorld%s %d%i%x\n", 'W', " 123", 456, -789, 10);
	//ft_printf("Hello %cWorld%s %d%i%x %X\n", 'W', " 123", 456, -789, 10, 10);
	//ft_printf("%%%%\n");
	//ft_printf("%c", '0');
	//ft_printf("\n");
	//ft_printf(" %c ", '0');
	//ft_printf("\n");
	//ft_printf(" %c", '0' - 256);
	//ft_printf("\n");
	//ft_printf("%c ", '0' + 256);
	//ft_printf("\n");
	//ft_printf(" %c %c %c ", '0', 0, '1');
	//ft_printf("\n");
	//ft_printf(" %c %c %c ", ' ', ' ', ' ');
	//ft_printf("\n");
	//ft_printf(" %c %c %c ", '1', '2', '3');
	//ft_printf("\n");
	//ft_printf(" %c %c %c ", '2', '1', 0);
	//ft_printf("\n");
	//ft_printf(" %c %c %c ", 0, '1', '2');
	//ft_printf("\n");
	//ft_printf(" %c %c %c ", 0, '1', '2');
	//ft_printf("\n");
	//printf("%d\n", ft_printf(" %s ", "-"));
	//printf("%d\n", printf(" NULL %s NULL ", NULL));
	//ft_printf("\n");
	//printf("%d\n", ft_printf(" NULL %s NULL ", NULL));
	//printf("%d\n", printf("%c",NULL));
	//ft_printf("\n");
	printf("%c\n", printf(" %p ", -1));
	ft_printf("\n");
	printf("%c\n", ft_printf(" %p ", -1));
	ft_printf("\n");
}
