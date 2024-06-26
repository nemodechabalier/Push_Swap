/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:40:25 by nde-chab          #+#    #+#             */
/*   Updated: 2024/05/29 16:16:18 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long n, int *size)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-', size);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, size);
		ft_putchar(nb % 10 + '0', size);
	}
	else
		ft_putchar(nb + '0', size);
}
