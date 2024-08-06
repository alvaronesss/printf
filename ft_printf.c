/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:13:16 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/11 18:15:21 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	seleccionar(char c, va_list milista)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (c == 'c')
		count += (ft_char(va_arg(milista, int)));
	if (c == 'p')
		count += (ft_pointer(va_arg(milista, long long )));
	if (c == 's')
		count += ft_str(va_arg(milista, char *));
	if (c == 'd' || c == 'i')
		count += (ft_integer(va_arg(milista, int)));
	if (c == 'u')
		count += (ft_unsigned(va_arg(milista, int)));
	if (c == 'x')
		count += ft_hexam(va_arg(milista, unsigned int));
	if (c == 'X')
		count += ft_hexa(va_arg(milista, unsigned int));
	if (c == '%')
		count += ft_char('%');
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list	milista;

	count = 0;
	i = 0;
	va_start (milista, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += seleccionar(str[i], milista);
		}
		else
			count += ft_char(str[i]);
		i++;
	}
	va_end(milista);
	return (count);
}
