/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:22:41 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 15:44:17 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_arg(t_pile_all **p_a)
{
	if (ft_verrif_struct(*p_a) == FALSE)
		reverse_a(p_a, TRUE);
}

void	three_arg(t_pile_all **p_a)
{
	if (for_3(*p_a) == TRUE)
		swap_a(*p_a, TRUE);
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
	if (size == 2)
		return (two_arg(p_a));
	if (size == 3)
		return (three_arg(p_a));
	if (size <= 5)
	{
		push_2_min_in_b(p_a, p_b);
		three_arg(p_a);
		sort_p_b_in_p_a(p_a, p_b);
		place_min_in_top(p_a, pos_min(p_a));
	}
	else
	{
		push_in_b(p_a, p_b);
		three_arg(p_a);
		sort_p_b_in_p_a(p_a, p_b);
		place_min_in_top(p_a, pos_min(p_a));
	}
}

int	pos_min(t_pile_all **p_a)
{
	int i;
	int size;
	t_pile_all *temp;

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