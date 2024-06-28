/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_do.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:38:16 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 16:54:13 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_char_is_r_r(t_pile_all **p_a, t_pile_all **p_b, char *s)
{
	if (s[2] == 'a' && s[3] == '\n')
		return (free(s), reverse_a(p_a, FALSE), 1);
	else if (s[2] == 'b' && s[3] == '\n')
		return (free(s), reverse_b(p_b, FALSE), 1);
	else if (s[2] == 'r' && s[3] == '\n')
		return (free(s), reverse_all(p_a, p_b, FALSE), 1);
	else
		return (free(s), write(2, "Error\n", 6), -1);
	return (0);
}

int	ft_char_is_r(t_pile_all **p_a, t_pile_all **p_b, char *s)
{
	if (s[1] == 'a' && s[2] == '\n')
		return (free(s), rotate_a(p_a, FALSE), 1);
	else if (s[1] == 'b' && s[2] == '\n')
		return (free(s), rotate_b(p_b, FALSE), 1);
	else if (s[1] == 'r' && s[2] == '\n')
		return (free(s), rotate_all(p_a, p_b, FALSE), 1);
	else if (s[1] == 'r' && (s[2] == 'r' || s[2] == 'a' || s[2] == 'b'))
		return (ft_char_is_r_r(p_a, p_b, s));
	else
		return (free(s), write(2, "Error\n", 6), -1);
}

int	ft_char_is_p(t_pile_all **p_a, t_pile_all **p_b, char *s)
{
	if (s[1] == 'a' && s[2] == '\n')
		return (free(s), push_a(p_a, p_b, FALSE), 1);
	else if (s[1] == 'b' && s[2] == '\n')
		return (free(s), push_b(p_a, p_b, FALSE), 1);
	else
		return (write(2, "Error\n", 6), -1);
}

int	ft_char_is_s(t_pile_all **p_a, t_pile_all **p_b, char *s)
{
	if (s[1] == 'a' && s[2] == '\n')
		return (free(s), swap_a(*p_a, FALSE), 1);
	else if (s[1] == 'b' && s[2] == '\n')
		return (free(s), swap_b(*p_b, FALSE), 1);
	else if (s[1] == 's' && s[2] == '\n')
		return (free(s), swap_all(*p_a, *p_b, FALSE), 1);
	else
		return (free(s), write(2, "Error\n", 6), -1);
}

int	ft_read_and_instrustion(t_pile_all **p_a, t_pile_all **p_b)
{
	char	*s;

	s = get_next_line(0);
	if (!s)
		return (0);
	if (s[0] == 's')
		return (ft_char_is_s(p_a, p_b, s));
	else if (s[0] == 'p')
		return (ft_char_is_p(p_a, p_b, s));
	else if (s[0] == 'r')
		return (ft_char_is_r(p_a, p_b, s));
	else
		return (free(s), write(2, "Error\n", 6), -1);
}
