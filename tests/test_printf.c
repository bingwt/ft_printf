/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btan <btan@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:02:33 by btan              #+#    #+#             */
/*   Updated: 2023/09/18 14:20:44 by btan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char	fmt;
	char	str[100];

	system("clear");
	while (1)
	{
		printf("Enter format: ");
		scanf(" %c", &fmt);
		printf("Enter string: ");
		scanf("%s", str);
		switch (fmt)
		{
			case 'c':
				printf("Real: %c\n", *str);
				printf("Faux: %c\n", *str);
				break ;
			case 's':
				printf("Real: %s\n", str);
				printf("Faux: %s\n", str);
				break ;
			case 'p':
				printf("Real: %p\n", str);
				printf("Faux: %p\n", str);
				break ;
			case 'd':
				printf("Real: %d\n", str);
				printf("Faux: %d\n", str);
				break ;
			case 'i':
				printf("Real: %i\n", str);
				printf("Faux: %i\n", str);
				break ;
			case 'u':
				printf("Real: %u\n", str);
				printf("Faux: %u\n", str);
				break ;
			case 'x':
				printf("Real: %x\n", str);
				printf("Faux: %x\n", str);
				break ;
			case 'X':
				printf("Real: %X\n", str);
				printf("Faux: %X\n", str);
				break ;
			case '%':
				printf("Real: %%\n");
				printf("Faux: %%\n");
				break ;
			case 'a':
				printf("%%c - Character Format:\n");
				printf("Real: %c\n", *str);
				printf("Faux: %c\n", *str);
				printf("\n%%s - String Format:\n");
				printf("Real: %s\n", str);
				printf("Faux: %s\n", str);
				printf("\n%%p - Pointer Format:\n");
				printf("Real: %p\n", str);
				printf("Faux: %p\n", str);
				printf("\n%%d - Decimal Format:\n");
				printf("Real: %d\n", str);
				printf("Faux: %d\n", str);
				printf("\n%%i - Integer Format:\n");
				printf("Real: %i\n", str);
				printf("Faux: %i\n", str);
				printf("\n%%u - Unsigned Decimal Format:\n");
				printf("Real: %u\n", str);
				printf("Faux: %u\n", str);
				printf("\n%%x Hexadecimal Format (Lowercase):\n");
				printf("Real: %x\n", str);
				printf("Faux: %x\n", str);
				printf("\n%%X Hexadecimal Format (Uppercase):\n");
				printf("Real: %X\n", str);
				printf("Faux: %X\n", str);
				printf("\nPrint %% sign:\n");
				printf("Real: %%\n");
				printf("Faux: %%\n");
				break;
			default:
				printf("Invalid Input!!!\n");
				break ;
		}
	}
}


