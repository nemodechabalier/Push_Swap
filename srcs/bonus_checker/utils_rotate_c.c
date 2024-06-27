/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_rotate_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:14:22 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/27 13:31:33 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rotate_a_c(t_pile_all **p_a)
{
	t_pile_all	*temp;

	if (!(*p_a) || !(*p_a)->next)
		return ;
	temp = pile_last(*p_a);
	(*p_a)->prev = temp;
	temp->next = *p_a;
	temp = *p_a;
	*p_a = (*p_a)->next;
	(*p_a)->prev = NULL;
	temp->next = NULL;
}

void	rotate_b_c(t_pile_all **p_b)
{
	t_pile_all	*temp;

	if (!(*p_b) || !(*p_b)->next)
		return ;
	temp = pile_last(*p_b);
	(*p_b)->prev = temp;
	temp->next = *p_b;
	temp = *p_b;
	*p_b = (*p_b)->next;
	(*p_b)->prev = NULL;
	temp->next = NULL;
}

void	rotate_all_c(t_pile_all **p_b, t_pile_all **p_a)
{
	rotate_a_c(p_a);
	rotate_b_c(p_b);
}
