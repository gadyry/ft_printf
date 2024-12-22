/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:26:45 by ael-gady          #+#    #+#             */
/*   Updated: 2024/12/15 18:32:55 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long nbr)
{
	int		cpt;
	char	*hexa_digits;

	hexa_digits = "0123456789abcdef";
	if (nbr < 16)
		return (ft_putchar(hexa_digits[nbr % 16]));
	else
	{
		cpt = ft_print_ptr(nbr / 16);
		return (cpt + ft_print_ptr(nbr % 16));
	}
}
