/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-chab <nde-chab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:40:17 by nde-chab          #+#    #+#             */
/*   Updated: 2024/06/28 15:31:26 by nde-chab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../libft_all/ft_printf/ft_printf.h"
# include "../../libft_all/get_next_line/get_next_line.h"
# include "../../libft_all/libtf/libft.h"
# include <limits.h>

typedef struct s_pile_all
{
	int					nb;
	struct s_pile_all	*next;
	struct s_pile_all	*prev;
}						t_pile_all;

typedef struct s_best_choice
{
	int					position;
	int					mouv;
}						t_best_choice;

// creat data

t_pile_all				*ft_define_struct(char **av);
t_pile_all				*ft_creat_p_a(int ac, char **av);
void					ft_free(char **strs);
int						ft_verrif_str(char **strs);
int						ft_verrif_nb(t_pile_all *p_a);

// pile utils

t_pile_all				*creat_new(int nb);
int						pile_size(t_pile_all *p_all);
t_pile_all				*pile_last(t_pile_all *p_all);
void					pile_add_back(t_pile_all **p_all, t_pile_all *new);
void					pile_add_front(t_pile_all **p_all, t_pile_all *new);
void					pile_clear(t_pile_all **p_all);

// instruction
void					swap_a(t_pile_all *p_a, int s);
void					swap_b(t_pile_all *p_b, int s);
void					swap_all(t_pile_all *p_a, t_pile_all *p_b);
void					push_a(t_pile_all **p_a, t_pile_all **p_b);
void					push_b(t_pile_all **p_a, t_pile_all **p_b);
void					rotate_a(t_pile_all **p_a, int s);
void					rotate_b(t_pile_all **p_b, int s);
void					rotate_all(t_pile_all **p_b, t_pile_all **p_a);
void					reverse_a(t_pile_all **p_a, int s);
void					reverse_b(t_pile_all **p_b, int s);
void					reverse_all(t_pile_all **p_a, t_pile_all **p_b);

// utils & algo
int						ft_verrif_struct(t_pile_all *p);
int						ft_rev_verrif_struct(t_pile_all *p);
int						ft_max_nb(t_pile_all *p);
int						ft_min_nb(t_pile_all *p);
void					first(t_pile_all **p_a, t_pile_all **p_b);
int						ft_prev_nb(t_pile_all *p_all);
int						ft_cost(t_pile_all *p_all, int nb);
t_best_choice			best_choice(t_best_choice best, t_pile_all *p_a,
							t_pile_all *p_b);
int						ft_median(t_pile_all *p_a);
void					do_best(t_best_choice best, t_pile_all **p_a,
							t_pile_all **p_b);
void					push_2_min_in_b(t_pile_all **p_a, t_pile_all **p_b);
void					three_arg(t_pile_all **p_a);
int						pos_min(t_pile_all **p_a);
int						pos_nb(t_pile_all *p_all, int nb);
int						for_3(t_pile_all *p_a);
void					push_in_b(t_pile_all **p_a, t_pile_all **p_b);
void					sort_p_b_in_p_a(t_pile_all **p_a, t_pile_all **p_b);
void					place_min_in_top(t_pile_all **p_a, int i);

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

#endif