/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   probando.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:47:23 by aporras-          #+#    #+#             */
/*   Updated: 2024/06/20 19:15:49 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c)
{
	write(1, c, 1);
	return (1);
}

int	ft_putnumber(int n, char *base, int bs)
{
	int	final[99];
	int	num;
	int	i;

	num = 0;
	i = 0;
	if (n < 0)
	{
		n = -n;
		num = num + ft_putchar('-');
	}
	while (n != 0)
	{
		final[i] = n % bs;
		n = n / bs;
		i++;
	}
	while (i >= 0)
	{
		i--;
		num = num + ft_putchar(base[final[i]]);
	}
	return (num);
}
