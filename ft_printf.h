/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:54:33 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/08 22:31:12 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>

int		ft_char(char c);
int		ft_hexam(long long n);
int		ft_hexaM(long long n);
int		ft_integer(int n);
int		ft_str(char *str);
int		nosigno(unsigned int n);
int		ft_pointer(void *n);








