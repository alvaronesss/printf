/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:47:25 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/10 21:41:14 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
        int	i;
        int	j;

        i = 0;
        j = 0;
        //prueba
        // printf("Hola");
        ft_printf("prueba de ft_print:\n");
        j = ft_printf("printf: cadena de caracteres: %s\n", "hola punky");
        i = printf("printf: cadena de caracteres: %s\n", "hola punky");
        printf("printf : %i\nmyprintf : %i\n\n", i, j);

        j = ft_printf("printf: puntero: %p\n", (void *) 12345678);
        i = printf("printf: puntero: %p\n", (void *) 12345678);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);
        
        j = ft_printf("printf: puntero: %p\n", (void *) 0x0);
        i = printf("printf: puntero: %p\n", (void *) 0x0);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("printf: numero hexadecimal: %x\n", 9223372036854775807LL);
        i = printf("printf: numero hexadecimal: %llx\n", 9223372036854775807LL);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("printf: numero en formato decimal: %i\n", 2546);
        i = printf("printf: numero en formato decimal: %i\n", 2546);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("printf: numero entero: %d\n", 42);
        i = printf("printf: numero entero: %d\n", 42);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("printf: unsigned %u\n", 5);
        i = printf("printf: unsigned %u\n", 5);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);
		
 	j = ft_printf("printf: char %c\n", 'b');
        i = printf("printf: char %c\n", 'b');
        printf("printf : %i\nmyprintf: %i\n\n", i, j);
        return (0);
        
}