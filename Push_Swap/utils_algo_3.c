/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:46:57 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/25 17:58:40 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_best2(t_best_choice best, t_pile_all **p_a, t_pile_all **p_b)
{
	while (best.mouv < 0)
	{
		reverse_a(p_a, TRUE);
		best.mouv++;
	}
	while (best.position < 0)
	{
		reverse_b(p_b, TRUE);
		best.position++;
	}
	push_a(p_a, p_b);
}

void	do_best(t_best_choice best, t_pile_all **p_a, t_pile_all **p_b)
{
	while (best.mouv > 0 && best.position > 0)
	{
		rotate_all(p_b, p_a);
		best.mouv--;
		best.position--;
	}
	while (best.mouv < 0 && best.position < 0)
	{
		reverse_all(p_a, p_b);
		best.mouv++;
		best.position++;
	}
	while (best.mouv > 0)
	{
		rotate_a(p_a, TRUE);
		best.mouv--;
	}
	while (best.position > 0)
	{
		rotate_b(p_b, TRUE);
		best.position--;
	}
	do_best2(best, p_a, p_b);
}

int	ft_cost2(t_pile_all *p_all, int nb, int size)
{
	int	i;

	i = 0;
	if (nb < ft_min_nb(p_all))
	{
		while (p_all->nb != ft_min_nb(p_all))
		{
			p_all = p_all->next;
			i++;
		}
	}
	else
	{
		while ((p_all->nb < nb) || (ft_prev_nb(p_all) > nb))
		{
			p_all = p_all->next;
			i++;
		}
	}
	if (i > size / 2)
		return (i - size);
	return (i);
}

int	ft_cost(t_pile_all *p_all, int nb)
{
	int	i;
	int	size;

	i = 0;
	size = pile_size(p_all);
	if (nb > ft_max_nb(p_all))
	{
		while (ft_prev_nb(p_all) < ft_max_nb(p_all))
		{
			p_all = p_all->next;
			i++;
		}
	}
	else
		return (ft_cost2(p_all, nb, size));
	if (i > size / 2)
		return (i - size);
	return (i);
}
