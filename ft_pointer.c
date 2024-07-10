/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:51:11 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/10 18:41:20 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(long long n)
{
	int						i;

	i = 0;
	if (!n)
	{
		i += ft_str("(nil)");
	}
	else
	{
		i += ft_str("0x");
		i += ft_hexam((unsigned long long)n);
	}
	return (i);
}
