/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:06:30 by jting             #+#    #+#             */
/*   Updated: 2022/06/17 11:53:03 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap.h"
# include "libft.h"
# include "ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_data
{
	int				data;
	int				index;
	struct s_data	*next;
}	t_data;

int			check_valid(char *s, int ac);
int			check_args(int ac, char **av);
t_data		*single_str(char *s, t_data *a);
int			valid_int(long int n);
t_data		*create_node(long int n);
int			ft_isnumerical(char c);
long int	push_atoi(char *s);
t_data		*init_lst(int ac, char **av);
int			lst_len(t_data *a);
void		sa(t_data *a);
void		sb(t_data *b);
void		ss(t_data *a, t_data *b);
void		print_lst(t_data *a, t_data *b);
void		pa(t_data *a, t_data *b);
void		pb(t_data *a, t_data *b);
void		ra(t_data *a);
void		rb(t_data *b);
void		rra(t_data *a);
void		rrb(t_data *b);
void		radix_sort(t_data *a, t_data *b);
void		three_sort(t_data *a);
void		five_sort(t_data *a, t_data *b);
void		sort_five_b(t_data *a, t_data *b);
int			find_min(t_data *a);
int			find_next_min(t_data *a, int prev_min);
void		print_index(t_data *a);
void		normalise(t_data *a);
int			correct_order(t_data *a, t_data *b);
int			no_dupes(t_data *a);
void		rr(t_data *a, t_data *b);
void		rrr(t_data *a, t_data *b);
int			free_list(t_data *list);
int			single_arg(char *s);

#endif
