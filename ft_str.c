/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:57:52 by aporras-          #+#    #+#             */
/*   Updated: 2024/06/28 12:25:49 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
/*int	main(void)
{
	char *test_str = "Hola, mundo!";
	int length;

	length = ft_str(test_str);
	printf("\nLa longitud de la cadena es: %d\n", length);
	return (0);
}*/
