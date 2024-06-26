/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:14:22 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/25 16:54:07 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_pile_all **p_a, int s)
{
	t_pile_all	*temp;

	temp = pile_last(*p_a);
	(*p_a)->prev = temp;
	temp->next = *p_a;
	temp = *p_a;
	*p_a = (*p_a)->next;
	(*p_a)->prev = NULL;
	temp->next = NULL;
	if (s == TRUE)
		ft_printf("ra\n");
}

void	rotate_b(t_pile_all **p_b, int s)
{
	t_pile_all	*temp;

	temp = pile_last(*p_b);
	(*p_b)->prev = temp;
	temp->next = *p_b;
	temp = *p_b;
	*p_b = (*p_b)->next;
	(*p_b)->prev = NULL;
	temp->next = NULL;
	if (s == TRUE)
		ft_printf("rb\n");
}

void	rotate_all(t_pile_all **p_b, t_pile_all **p_a)
{
	ft_printf("rr\n");
	rotate_a(p_a, FALSE);
	rotate_b(p_b, FALSE);
}
