/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:40:14 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/25 17:31:40 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile_all	*p_a;
	t_pile_all	*p_b;

	p_b = NULL;
	if (ac == 1)
		return (ft_printf("Error\n"), -1);
	else
		p_a = ft_creat_p_a(ac, av + 1);
	if (!p_a)
		return (-1);
	first(&p_a, &p_b);
	pile_clear(&p_a);
	return (0);
}

// int	main(int ac, char **av)
//{
//	t_pile_all	*p_a;
//	t_pile_all	*p_b;
//	t_pile_all	*temp;

//	p_b = NULL;
//	if (ac == 1)
//		return (ft_printf("Error\n"), -1);
//	else
//		p_a = ft_creat_p_a(ac, av + 1);
//	if (!p_a)
//		return (-1);
//	//printf("$%d\n", ft_prev_nb(p_a));
//	// rotate_a(&p_a, FALSE);
//	first(&p_a , &p_b);
//	//push_b(&p_a, &p_b);
//	//push_a(&p_a, &p_b);
//	while (p_a)
//	{
//		ft_printf("@%d\n", p_a->nb);
//		temp = p_a->next;
//		free(p_a);
//		p_a = temp;
//	}
//	while (p_b)
//	{
//		//ft_printf("!%d\n", p_b->nb);
//		temp = p_b->next;
//		free(p_b);
//		p_b = temp;
//	}
//	return (0);
//}
