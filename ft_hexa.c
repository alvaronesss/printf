/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:04:32 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/11 18:15:43 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long long n)
{
	char				*hex_digits;
	unsigned long long	count;

	hex_digits = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_hexa(n / 16);
		count += ft_char(hex_digits[n % 16]);
	}
	else
	{
		count += ft_char(hex_digits[n % 16]);
	}
	return (count);
}
