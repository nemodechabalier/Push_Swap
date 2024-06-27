/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:41:55 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/27 13:13:33 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../libft_all/ft_printf/ft_printf.h"
# include "../../libft_all/get_next_line/get_next_line.h"
# include "../../libft_all/libtf/libft.h"
# include "../Push_Swap/push_swap.h"

// instruction
void	swap_all_c(t_pile_all *p_a, t_pile_all *p_b);
void	swap_b_c(t_pile_all *p_b);
void	swap_a_c(t_pile_all *p_a);
void	push_a_c(t_pile_all **p_a, t_pile_all **p_b);
void	push_b_c(t_pile_all **p_a, t_pile_all **p_b);
void	rotate_all_c(t_pile_all **p_b, t_pile_all **p_a);
void	rotate_b_c(t_pile_all **p_b);
void	rotate_a_c(t_pile_all **p_a);
void	reverse_b_c(t_pile_all **p_b);
void	reverse_a_c(t_pile_all **p_a);
void	reverse_all_c(t_pile_all **p_a, t_pile_all **p_b);
int		ft_read_and_instrustion(t_pile_all **p_a, t_pile_all **p_b);

#endif