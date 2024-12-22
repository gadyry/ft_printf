/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 10:26:17 by ael-gady          #+#    #+#             */
/*   Updated: 2024/12/14 16:47:15 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	cpt;

	cpt = 0;
	if (!str)
	{
		cpt += write (1, "(null)", 6);
		return (cpt);
	}
	while (*str)
		cpt += write (1, str++, 1);
	return (cpt);
}
