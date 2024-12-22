/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_based_in_format.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:05:28 by ael-gady          #+#    #+#             */
/*   Updated: 2024/12/15 18:36:03 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_based_in_format(char format, va_list args)
{
	int	cpt;

	if (format == 'c')
		cpt = ft_putchar(va_arg(args, int));
	else if (format == 's')
		cpt = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
	{
		cpt = write (1, "0x", 2);
		cpt += ft_print_ptr((unsigned long long)va_arg(args, void *));
	}
	else if (format == 'd' || format == 'i')
		cpt = ft_print_digit((long)va_arg(args, int), 10, 1);
	else if (format == 'u')
		cpt = ft_print_digit((long)va_arg(args, unsigned int), 10, 1);
	else if (format == 'x')
		cpt = ft_print_digit((long)va_arg(args, unsigned int), 16, 1);
	else if (format == 'X')
		cpt = ft_print_digit((long)va_arg(args, unsigned int), 16, 2);
	else
		cpt = ft_putchar(format);
	return (cpt);
}
