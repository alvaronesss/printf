/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nosigno.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:36:55 by aporras-          #+#    #+#             */
/*   Updated: 2024/06/28 19:56:27 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int nosigno(unsigned int n)
{
	unsigned int count;
	char	c;

	count = 0;
	if (n > 9)
		{
			count += ft_nosigno(n / 10);
		}
		c = (n % 10) + '0';
			write(1, &c, 1);
			count++;	
	return (count);		
}