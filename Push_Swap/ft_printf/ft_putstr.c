/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:12:00 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/07 11:13:22 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *size)
{
	size_t	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)", size));
	while (s[i])
	{
		ft_putchar(s[i], size);
		i++;
	}
}
