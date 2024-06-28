/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:29:04 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 15:44:32 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_pile_all **p_a, t_pile_all **p_b)
{
	t_pile_all	*temp;

	if (!*p_b)
		return ;
	temp = *p_b;
	if (!(*p_b)->next)
		return (ft_printf("pa\n"),*p_b = NULL, pile_add_front(p_a, temp));
	*p_b = (*p_b)->next;
	(*p_b)->prev = NULL;
	temp->next = NULL;
	temp->prev = NULL;
	pile_add_front(p_a, temp);
	ft_printf("pa\n");
}

void	push_b(t_pile_all **p_a, t_pile_all **p_b)
{
	t_pile_all	*temp;

	if (!*p_a)
		return ;
	temp = *p_a;
	if (!(*p_a)->next)
		return (ft_printf("pb\n"), *p_a = NULL, pile_add_front(p_b, temp));
	*p_a = (*p_a)->next;
	(*p_a)->prev = NULL;
	temp->next = NULL;
	temp->prev = NULL;
	pile_add_front(p_b, temp);
	ft_printf("pb\n");
}
