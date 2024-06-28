/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:30:03 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 16:56:45 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_a(t_pile_all **p_a, int bool)
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
	if (bool == TRUE)
		ft_printf("rra\n");
}

void	reverse_b(t_pile_all **p_b, int bool)
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
	if (bool == TRUE)
		ft_printf("rrb\n");
}

void	reverse_all(t_pile_all **p_a, t_pile_all **p_b, int bool)
{
	if (bool == TRUE)
		ft_printf("rrr\n");
	reverse_a(p_a, FALSE);
	reverse_b(p_b, FALSE);
}
