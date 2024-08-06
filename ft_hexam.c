/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:44:17 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/11 16:53:27 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexam(unsigned long long n)
{
	char				*hex_digits;
	unsigned long long	count;

	hex_digits = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_hexam(n / 16);
		count += ft_char(hex_digits[n % 16]);
	}
	else
	{
		count += ft_char(hex_digits[n % 16]);
	}
	return (count);
}
