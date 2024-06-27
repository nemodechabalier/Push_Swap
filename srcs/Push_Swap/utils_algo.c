/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:30:46 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/25 17:43:08 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verrif_struct(t_pile_all *p)
{
	int	i;

	i = p->nb;
	while (p)
	{
		if (i > p->nb)
			return (FALSE);
		i = p->nb;
		p = p->next;
	}
	return (TRUE);
}

int	ft_rev_verrif_struct(t_pile_all *p)
{
	int	i;

	i = p->nb;
	while (p)
	{
		if (i < p->nb)
			return (FALSE);
		i = p->nb;
		p = p->next;
	}
	return (TRUE);
}

int	ft_max_nb(t_pile_all *p)
{
	int	i;

	i = p->nb;
	while (p)
	{
		if (i < p->nb)
			i = p->nb;
		p = p->next;
	}
	return (i);
}

int	ft_min_nb(t_pile_all *p)
{
	int	i;

	i = p->nb;
	while (p)
	{
		if (i > p->nb)
			i = p->nb;
		p = p->next;
	}
	return (i);
}

int	ft_prev_nb(t_pile_all *p_all)
{
	if (p_all->prev)
		return (p_all->prev->nb);
	else
	{
		p_all = pile_last(p_all);
		return (p_all->nb);
	}
}
