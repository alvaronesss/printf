/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:52:00 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/08 22:27:03 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexam(long long n)
{
    char *hex_digits = "0123456789abcdef"; 
    char c;
    int count = 0;

    if (n >= 16)
	{
        ft_hexam(n / 16); 
    }
    
    c = hex_digits[n % 16];
    count = write(1, &c, 1);
	return (count);
}

int main()
{
    long long num = 3456;
    ft_hexam(num);
    return 0;
}
	