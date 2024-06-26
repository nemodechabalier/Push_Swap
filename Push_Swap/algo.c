/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:22:41 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/25 17:48:33 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	je_test(t_pile_all **p_a, t_pile_all **p_b);

void	two_arg(t_pile_all **p_a)
{
	reverse_a(p_a, TRUE);
}

void	three_arg(t_pile_all **p_a)
{
	while (ft_verrif_struct(*p_a) != TRUE)
	{
		if (ft_rev_verrif_struct(*p_a) == TRUE)
			swap_a(*p_a, TRUE);
		reverse_a(p_a, TRUE);
	}
}

void	first(t_pile_all **p_a, t_pile_all **p_b)
{
	int	size;

	size = pile_size(*p_a);
	if (ft_verrif_struct(*p_a) == TRUE)
		return ;
	if (size == 1)
		return ;
	if (size == 2)
		return (two_arg(p_a));
	if (size == 3)
		return (three_arg(p_a));
	else
		je_test(p_a, p_b);
}

int	best_for_finish(t_pile_all **p_a)
{
	int			i;
	int			size;
	t_pile_all	*temp;

	temp = *p_a;
	i = 0;
	size = pile_size(*p_a);
	while (temp->nb != ft_min_nb(temp))
	{
		temp = temp->next;
		i++;
	}
	if (i > size / 2)
		i = size - i;
	return (i);
}

void	je_test(t_pile_all **p_a, t_pile_all **p_b)
{
	t_best_choice	best;
	int				median;
	int				i;

	median = ft_median(*p_a);
	while (pile_size(*p_a) != 3)
	{
		push_b(p_a, p_b);
		if ((*p_b)->nb <= median)
			rotate_b(p_b, TRUE);
	}
	three_arg(p_a);
	while ((*p_b))
	{
		best = best_choice(best, *p_a, *p_b);
		do_best(best, p_a, p_b);
	}
	i = best_for_finish(p_a);
	if (i < 0)
	{
		while (ft_verrif_struct(*p_a) != TRUE)
			rotate_a(p_a, TRUE);
	}
	while (ft_verrif_struct(*p_a) != TRUE)
		reverse_a(p_a, TRUE);
}
