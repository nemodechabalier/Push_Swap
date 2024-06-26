/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_gestion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:09:14 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/19 13:32:54 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verrif_double(char **strs)
{
	int	y1;
	int	i;
	int	y2;

	i = 0;
	y1 = 0;
	while (strs[y1])
	{
		y2 = y1 + 1;
		while (strs[y2])
		{
			i = 0;
			while (strs[y1][i] == strs[y2][i])
			{
				if (strs[y1][i + 1] == '\0' && strs[y2][i + 1] == '\0')
					return (FALSE);
				i++;
			}
			y2++;
		}
		y1++;
	}
	return (TRUE);
}

void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		strs[i] = NULL;
		i++;
	}
	free(strs);
	strs = NULL;
}

int	ft_verrif_str(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		if (strs[i][j] == '-')
			j++;
		if (strs[i][0] == 0 || strs[i][j] == 0)
			return (FALSE);
		while (strs[i][j])
		{
			if (ft_isdigit(strs[i][j]) == FALSE)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (ft_verrif_double(strs));
}
