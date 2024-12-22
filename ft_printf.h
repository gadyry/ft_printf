/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:05:51 by ael-gady          #+#    #+#             */
/*   Updated: 2024/12/15 18:33:54 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_based_in_format(char format, va_list args);
int	ft_printf(const char *str, ...);
int	ft_print_digit(long long nbr, int base, int u_l);
int	ft_print_ptr(unsigned long long nbr);
int	ft_putstr(char *str);
int	ft_putchar(int c);

#endif