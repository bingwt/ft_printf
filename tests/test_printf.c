/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:02:33 by btan              #+#    #+#             */
/*   Updated: 2023/09/24 15:20:45 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../includes/ft_printf.h"

int	main()
{
	char	fmt;
	char	str[100];

	system("clear");
	while (1)
	{
		printf("Enter format: ");
		scanf(" %c", &fmt);
		ft_printf("Enter string: ");
		scanf("%s", str);
		switch (fmt)
		{
			case 'c':
				printf("Real: %c\n", *str);
				ft_printf("Faux: %c\n", *str);
				break ;
			case 's':
				printf("Real: %s\n", str);
				ft_printf("Faux: %s\n", str);
				break ;
			case 'p':
				printf("Real: %p\n", str);
				ft_printf("Faux: %p\n", str);
				break ;
			case 'd':
				printf("Real: %d\n", atoi(str));
				ft_printf("Faux: %d\n", atoi(str));
				break ;
			case 'i':
				printf("Real: %i\n", atoi(str));
				ft_printf("Faux: %i\n", atoi(str));
				break ;
			case 'u':
				printf("Real: %u\n", str);
				ft_printf("Faux: %u\n", str);
				break ;
			case 'x':
				printf("Real: %x\n", atoi(str));
				ft_printf("Faux: %x\n", atoi(str));
				break ;
			case 'X':
				printf("Real: %X\n", atoi(str));
				ft_printf("Faux: %X\n", atoi(str));
				break ;
			case '%':
				printf("Real: %%\n");
				ft_printf("Faux: %%\n");
				break ;
			case 'a':
				printf("%%c - Character Format:\n");
				printf("Real: %c\n", *str);
				ft_printf("Faux: %c\n", *str);

				printf("\n%%s - String Format:\n");
				printf("Real: %s\n", str);
				ft_printf("Faux: %s\n", str);

				printf("\n%%p - Pointer Format:\n");
				printf("Real: %p\n", str);
				ft_printf("Faux: %p\n", str);

				printf("\n%%d - Decimal Format:\n");
				printf("Real: %d\n", atoi(str));
				ft_printf("Faux: %d\n", atoi(str));

				printf("\n%%i - Integer Format:\n");
				printf("Real: %i\n", atoi(str));
				ft_printf("Faux: %i\n", atoi(str));

				printf("\n%%u - Unsigned Decimal Format:\n");
				printf("Real: %u\n", atoi(str));
				ft_printf("Faux: %u\n", atoi(str));

				printf("\n%%x Hexadecimal Format (Lowercase):\n");
				printf("Real: %x\n", atoi(str));
				ft_printf("Faux: %x\n", atoi(str));

				printf("\n%%X Hexadecimal Format (Uppercase):\n");
				printf("Real: %X\n", atoi(str));
				ft_printf("Faux: %X\n", atoi(str));

				printf("\nPrint %% sign:\n");
				printf("Real: %%%\n");
				ft_printf("Faux: %%%\n");
				break ;
			default:
				printf("Invalid Input!!!\n");
				break ;
		}
	}
}


