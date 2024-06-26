/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:35:41 by nde-chab          #+#    #+#             */
/*   Updated: 2024/05/28 11:36:14 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *size)
{
	long	nb;

	nb = n;
	if (nb > 9)
	{
		ft_putnbr(nb / 10, size);
		ft_putchar(nb % 10 + '0', size);
	}
	else
		ft_putchar(nb + '0', size);
}
