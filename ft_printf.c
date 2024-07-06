/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:13:16 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/06 21:35:33 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	seleccionar(char c,char const *str, va_list milista)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (c == 'c')
		count =+ (ft_char(va_arg(milista, char,)));

	if (str[i] == 's')
		count =+ ft_str(va_arg(milista, char *));

	if (str[i] == 'd' || str[i] == 'i')
		count =+ (ft_integer(va_arg(milista, int)));
	
	if (str[i] == 'u')
		count =+ (ft_nosigno(va_argv(milista, int)));

	if (str[i] == 'x')
		count =+ ft_hexam(va_arg(milista, long long));

	if (str[i] == 'X')
		count =+ ft_hexaM(va_arg(milista, long long));

	if (c == %%)
		write(1, '%', 4);

}

int	ft_printf(char const *str, ...)
{
	int i;
	int count;
	va_list milista;

	count = 0;
	i = 0;
	va_start(milista, str);
	while(str[i])
	{
		if(str[i] == '%')
		{
			i++;
			seleccionar(str[i], milista);
		}

		count =+ ft_char(str[i]);
		i++;
	}
	va_end(milista);
	return (count);
}
