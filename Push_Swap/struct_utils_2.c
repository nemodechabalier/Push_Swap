/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:37:00 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/25 17:44:57 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pile_clear(t_pile_all **p_all)
{
	t_pile_all	*temp;
	t_pile_all	*next;

	temp = *p_all;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*p_all = NULL;
}
