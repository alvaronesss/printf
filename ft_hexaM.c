/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaM.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:04:32 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/09 15:35:42 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexaM(long n)
{
    char *hex_digits = "0123456789ABCDEF"; 
    char c;
    int count = 0;

    if (n >= 16)
	{
        ft_hexaM(n / 16); 
    }
    
    c = hex_digits[n % 16];
    count += write(1, &c, 1);
	return (count);
}

/* int main()
{
    long long num = 1111111;
    ft_hexaM(num);
    return 0;
} */