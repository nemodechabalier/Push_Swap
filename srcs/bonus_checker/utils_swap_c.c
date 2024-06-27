/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:12:05 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/26 12:40:21 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	swap_a_c(t_pile_all *p_a)
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
}

void	swap_b_c(t_pile_all *p_b)
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
}

void	swap_all_c(t_pile_all *p_a, t_pile_all *p_b)
{
	swap_a_c(p_a);
	swap_b_c(p_b);
}
