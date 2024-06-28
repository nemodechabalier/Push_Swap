/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:12:05 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 16:50:43 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_pile_all *p_a, int bool)
{
	t_pile_all	*temp;
	int			nb_temp;

	temp = p_a;
	if (!temp || !temp->next)
		return ;
	temp = temp->next;
	nb_temp = temp->nb;
	temp->nb = p_a->nb;
	p_a->nb = nb_temp;
	if (bool == TRUE)
		ft_printf("sa\n");
}

void	swap_b(t_pile_all *p_b, int bool)
{
	t_pile_all	*temp;
	int			nb_temp;

	temp = p_b;
	if (!temp || !temp->next)
		return ;
	temp = temp->next;
	nb_temp = temp->nb;
	temp->nb = p_b->nb;
	p_b->nb = nb_temp;
	if (bool == TRUE)
		ft_printf("sb\n");
}

void	swap_all(t_pile_all *p_a, t_pile_all *p_b, int bool)
{
	if (bool == TRUE)
		ft_printf("ss\n");
	swap_a(p_a, FALSE);
	swap_b(p_b, FALSE);
}
