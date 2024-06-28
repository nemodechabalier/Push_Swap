/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:41:55 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 16:51:49 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../../libft_all/ft_printf/ft_printf.h"
# include "../../libft_all/get_next_line/get_next_line.h"
# include "../../libft_all/libtf/libft.h"
# include "../Push_Swap/push_swap.h"

// instruction

int		ft_read_and_instrustion(t_pile_all **p_a, t_pile_all **p_b);

#endif