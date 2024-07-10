/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aporras- <aporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:54:33 by aporras-          #+#    #+#             */
/*   Updated: 2024/07/10 21:46:56 by aporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_char(char c);
int		ft_hexam(unsigned long long n);
int		ft_hexaM(unsigned long long n);
int		ft_integer(int n);
int		ft_str(char *str);
int		ft_nosigno(unsigned int n);
int		ft_pointer(long long n);

#endif
