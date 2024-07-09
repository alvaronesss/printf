/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:51:11 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/09 13:36:39 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *n)
{
	int						i;
	unsigned long long int	ptr;

	i = 0;
	if (!n)
		return (ft_pointer("nil"));
	ptr = (unsigned long long int)n;
	ft_str("0x");
	i = ft_hexam(ptr);
	return (i + 2);
}
