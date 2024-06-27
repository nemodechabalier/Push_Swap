/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:05:13 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/23 15:31:01 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile_all	*creat_new(int nb)
{
	t_pile_all	*new;

	new = (t_pile_all *)malloc(sizeof(t_pile_all));
	if (!new)
		return (NULL);
	new->nb = nb;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

int	pile_size(t_pile_all *p_all)
{
	int	i;

	i = 0;
	while (p_all)
	{
		p_all = p_all->next;
		i++;
	}
	return (i);
}

t_pile_all	*pile_last(t_pile_all *p_all)
{
	if (!p_all)
		return (NULL);
	while (p_all->next)
	{
		p_all = p_all->next;
	}
	return (p_all);
}

void	pile_add_back(t_pile_all **p_all, t_pile_all *new)
{
	t_pile_all	*temp;

	if (!*p_all)
	{
		*p_all = new;
		return ;
	}
	temp = *p_all;
	while (temp->next)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;
}

void	pile_add_front(t_pile_all **p_all, t_pile_all *new)
{
	new->next = *p_all;
	if (*p_all)
		(*p_all)->prev = new;
	*p_all = new;
}
