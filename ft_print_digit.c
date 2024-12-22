/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:54:45 by ael-gady          #+#    #+#             */
/*   Updated: 2024/12/15 12:00:24 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(long long nbr, int base, int u_l)
{
	char	*upper;
	char	*lower;
	int		cpt;

	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	if (nbr < 0)
	{
		write (1, "-", 1);
		return (1 + ft_print_digit(-nbr, base, u_l));
	}
	else if (nbr < base)
	{
		if (u_l == 1)
			return (ft_putchar(lower[nbr]));
		else
			return (ft_putchar(upper[nbr]));
	}
	else
	{
		cpt = ft_print_digit(nbr / base, base, u_l);
		return (cpt + ft_print_digit(nbr % base, base, u_l));
	}
}
