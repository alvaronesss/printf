/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:15:48 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/08 22:27:23 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_integer(int n)
{
	int count;
	char c;
	
	count = 0;
	if (n == -2147483648)
	{ 
		write(1, "-2147483648", 11);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
			count++;
		}
		if (n > 9)
		{
			count += ft_integer(n / 10);
		}
		c = (n % 10) + '0';
			write(1, &c, 1);
			count++;	
		
			
	}
	return (count);
}
/*   int main()
{
    int nn = 2;
    ft_integer(nn);
    write(1, "\n", 1); 
    return 0;
} */
