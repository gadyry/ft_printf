/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:03:55 by ael-gady          #+#    #+#             */
/*   Updated: 2024/12/15 12:20:58 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		cpt;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, str);
	cpt = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1))
			cpt += ft_print_based_in_format(*++str, args);
		else if (*str != '%')
			cpt += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (cpt);
}
