/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:42:21 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 15:08:35 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoll(const char *str)
{
	int			i;
	long long	sign;
	long long	result;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]) == 1)
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}

t_pile_all	*ft_define_struct(char **strs)
{
	int			i;
	long long	nb;
	t_pile_all	*p_a;
	t_pile_all	*temp;

	i = 0;
	p_a = NULL;
	while (strs[i] != NULL)
	{
		nb = ft_atoll(strs[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			return (pile_clear(&p_a), NULL);
		temp = creat_new((int)nb);
		if (!temp)
			return (pile_clear(&p_a), NULL);
		pile_add_back(&p_a, temp);
		i++;
	}
	return (p_a);
}

t_pile_all	*ft_creat_p_a(int ac, char **av)
{
	char		**strs;
	t_pile_all	*p_a;

	if (ac == 2)
	{
		strs = ft_split(av[0], ' ');
		if (!strs)
			return (write(2, "Error\n", 6), NULL);
		if (ft_verrif_str(strs) == FALSE)
			return (ft_free(strs), write(2, "Error\n", 6), NULL);
		p_a = ft_define_struct(strs);
		if (!p_a)
			return (write(2, "Error\n", 6), pile_clear(&p_a), ft_free(strs),
				NULL);
		ft_free(strs);
	}
	else
	{
		if (ft_verrif_str(av) == FALSE)
			return (write(2, "Error\n", 6), NULL);
		p_a = ft_define_struct(av);
		if (!p_a)
			return (pile_clear(&p_a), write(2, "Error\n", 6), NULL);
	}
	return (p_a);
}
