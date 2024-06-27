/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:34:03 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/27 14:47:21 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_in_a(t_pile_all **p_a, t_pile_all **p_b)
{
	t_best_choice	best;
	int				i;

	while ((*p_b))
	{
		best = best_choice(best, *p_a, *p_b);
		do_best(best, p_a, p_b);
	}
	i = best_for_finish(p_a);
	if (i > 0)
	{
		while (ft_verrif_struct(*p_a) != TRUE)
			rotate_a(p_a, TRUE);
	}
	while (ft_verrif_struct(*p_a) != TRUE)
		reverse_a(p_a, TRUE);
}

void	do_for_5(t_pile_all **p_a, t_pile_all **p_b)
{
	int	i;

	while (pile_size(*p_a) > 3)
	{
		i = pos_nb(*p_a, ft_min_nb(*p_a));
		while (i > 0)
		{
			rotate_a(p_a, TRUE);
			i--;
		}
		while (i < 0)
		{
			reverse_a(p_a, TRUE);
			i++;
		}
		push_b(p_a, p_b);
	}
	three_arg(p_a);
	push_in_a(p_a, p_b);
}

int	for_3(t_pile_all *p_a)
{
	if (p_a->nb == ft_min_nb(p_a))
	{
		p_a = p_a->next;
		if (p_a->nb == ft_max_nb(p_a))
			return (TRUE);
	}
	return (FALSE);
}
