/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:04:38 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 15:18:57 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	absv(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	cost_tot(t_best_choice all)
{
	if (all.mouv >= 0 && all.position >= 0)
	{
		if (all.mouv > all.position)
			return (all.mouv);
		return (all.position);
	}
	if (all.mouv <= 0 && all.position <= 0)
	{
		if (all.mouv > all.position)
			return (-all.position);
		return (-all.mouv);
	}
	return (absv(absv(all.position) + absv(all.mouv)));
}

t_best_choice	best_choice(t_best_choice best, t_pile_all *p_a,
		t_pile_all *p_b)
{
	t_best_choice	current;
	int				i;
	int				size;

	i = 0;
	size = pile_size(p_b);
	best.position = 0;
	best.mouv = ft_cost(p_a, p_b->nb);
	while (p_b)
	{
		current.position = i;
		if (i > size / 2)
			current.position = i - size;
		current.mouv = ft_cost(p_a, p_b->nb);
		if (cost_tot(best) > cost_tot(current))
		{
			best.mouv = current.mouv;
			best.position = current.position;
		}
		i++;
		p_b = p_b->next;
	}
	return (best);
}

static int	*sort_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	return (tab);
}

int	ft_median(t_pile_all *p_a)
{
	int	size;
	int	i;
	int	*tab;

	i = 0;
	size = pile_size(p_a);
	tab = malloc(sizeof(int) * (size));
	if (!tab)
		return (-1);
	while (p_a)
	{
		tab[i] = p_a->nb;
		p_a = p_a->next;
		i++;
	}
	tab = sort_tab(tab, size);
	i = tab[size / 2];
	return (free(tab), i);
}