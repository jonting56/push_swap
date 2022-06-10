/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:51:17 by jting             #+#    #+#             */
/*   Updated: 2022/06/10 16:51:48 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_data *a)
{
	t_data	*tmp;

	tmp = a->next;
	ft_printf("3 sort\n");
	if (tmp->index == 0 && tmp->next->index == 2)
	{
		ra(a);
		sa(a);
	}
	if (tmp->index == 1 && tmp->next->index == 0)
		sa(a);
	if (tmp->index == 2 && tmp->next->index == 1)
	{
		rra(a);
		sa(a);
	}
	if (tmp->index == 1 && tmp->next->index == 2)
		ra(a);
	if (tmp->index == 2 && tmp->next->index == 0)
		rra(a);
}

/*
void	sort_small(t_data *a, t_data *b)
{
	t_data	*tmp;

	tmp = a->data;
	while (asc_order(a)
	{
		if (tmp->data > tmp->next->data)
		{
			pb(a, b);
		}
	}
}
*/