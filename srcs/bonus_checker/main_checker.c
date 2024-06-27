/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:51:30 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/27 13:27:29 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	t_pile_all	*p_a;
	t_pile_all	*p_b;
	int			i;

	i = 1;
	p_b = NULL;
	p_a = NULL;
	if (ac == 1)
		return (ft_printf("need more args\n"), -1);
	else
		p_a = ft_creat_p_a(ac, av + 1);
	if (!p_a)
		return (-1);
	while (i == TRUE)
		i = ft_read_and_instrustion(&p_a, &p_b);
	if (i == -1)
		return (pile_clear(&p_a), pile_clear(&p_b), -1);
	else if (ft_verrif_struct(p_a) == TRUE && !p_b)
		ft_printf("OK\n");
	else
		return (pile_clear(&p_a), pile_clear(&p_b), ft_printf("KO\n"));
	pile_clear(&p_a);
	pile_clear(&p_b);
	return (0);
}
