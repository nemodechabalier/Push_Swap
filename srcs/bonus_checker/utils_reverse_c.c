/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_reverse_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:30:03 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/27 13:31:37 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	reverse_a_c(t_pile_all **p_a)
{
	t_pile_all	*temp;
	int			size;
	int			i;

	i = 0;
	if (!(*p_a) || !(*p_a)->next)
		return ;
	size = pile_size(*p_a);
	temp = pile_last(*p_a);
	temp->prev = NULL;
	if (*p_a != temp)
		(*p_a)->prev = temp;
	temp->next = *p_a;
	*p_a = temp;
	while (i < size - 1)
	{
		temp = temp->next;
		i++;
	}
	temp->next = NULL;
}

void	reverse_b_c(t_pile_all **p_b)
{
	t_pile_all	*temp;
	int			size;
	int			i;

	i = 0;
	if (!(*p_b) || !(*p_b)->next)
		return ;
	size = pile_size(*p_b);
	temp = pile_last(*p_b);
	temp->prev = NULL;
	if (*p_b != temp)
		(*p_b)->prev = temp;
	temp->next = *p_b;
	*p_b = temp;
	while (i < size - 1)
	{
		temp = temp->next;
		i++;
	}
	temp->next = NULL;
}

void	reverse_all_c(t_pile_all **p_a, t_pile_all **p_b)
{
	reverse_a_c(p_a);
	reverse_b_c(p_b);
}
