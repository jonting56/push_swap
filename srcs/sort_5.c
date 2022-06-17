/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:51:17 by jting             #+#    #+#             */
/*   Updated: 2022/06/16 14:58:34 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_data *a)
{
	t_data	*tmp;

	tmp = a->next;
	if (tmp->index == 0 && tmp->next->index == 2)
	{
		sa(a);
		ra(a);
	}
	if (tmp->index == 1 && tmp->next->index == 0)
		sa(a);
	if (tmp->index == 2 && tmp->next->index == 1)
	{
		sa(a);
		rra(a);
	}
	if (tmp->index == 1 && tmp->next->index == 2)
		rra(a);
	if (tmp->index == 2 && tmp->next->index == 0)
		ra(a);
}

void	sort_five_b(t_data *a, t_data *b)
{
	t_data	*tmp;

	tmp = b->next;
	if (tmp->index == 3)
		sb(b);
	pa(a, b);
	pa(a, b);
	ra(a);
	ra(a);
}

void	five_sort(t_data *a, t_data *b)
{
	t_data	*tmp;
	int		i;

	i = lst_len(a);
	tmp = a->next;
	while (i)
	{
		if (tmp->index >= 3)
			pb(a, b);
		else
			ra(a);
		tmp = a->next;
		i--;
	}
	three_sort(a);
	if (lst_len(b) == 2)
	{
		pa(a, b);
		ra(a);
		return ;
	}
	sort_five_b(a, b);
}
