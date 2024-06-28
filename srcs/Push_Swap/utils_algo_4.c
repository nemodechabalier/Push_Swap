/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_algo_4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 15:20:00 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 16:56:38 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_in_b(t_pile_all **p_a, t_pile_all **p_b)
{
	int	median;

	median = ft_median(*p_a);
	while (pile_size(*p_a) != 3)
	{
		push_b(p_a, p_b, TRUE);
		if ((*p_b)->nb <= median && pile_size(*p_a) > 5)
			rotate_b(p_b, TRUE);
	}
}
void	sort_p_b_in_p_a(t_pile_all **p_a, t_pile_all **p_b)
{
	t_best_choice	best;

	while ((*p_b))
	{
		best = best_choice(best, *p_a, *p_b);
		do_best(best, p_a, p_b);
	}
}

void	place_min_in_top(t_pile_all **p_a, int i)
{
	if (i > 0)
	{
		while ((*p_a)->nb != ft_min_nb(*p_a))
			rotate_a(p_a, TRUE);
	}
	while ((*p_a)->nb != ft_min_nb(*p_a))
		reverse_a(p_a, TRUE);
}