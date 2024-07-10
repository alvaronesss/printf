/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaM.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:04:32 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/10 20:32:28 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexaM(unsigned long long n)
{
    char *hex_digits = "0123456789ABCDEF"; 
    unsigned long long count = 0;

    if (n >= 16)
	{
        count += ft_hexaM(n / 16);
        count += ft_char(hex_digits[n % 16]);
    }
    else
    {
        count += ft_char(hex_digits[n % 16]);
    }
	return (count);
}

/*int main()
{
    unsigned long long num = LONG_MAX;
    ft_hexaM(num);
    return 0;
}*/