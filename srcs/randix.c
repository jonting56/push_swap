/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:49:54 by jting             #+#    #+#             */
/*   Updated: 2022/06/08 14:59:22 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_list(t_data *list)
{
	t_data	*previous;

	while (list)
	{
		previous = list;
		list = list->next;
		free (previous);
	}
	return (printf("Error\n"));
}

int	no_dupes(t_data *a)
{
	int		*current;
	int		*next;
	t_data	*top;

	a = a->next;
	top = a;
	while (a)
	{
		current = &(a->data);
		while (a->next)
		{
			next = &(a->next->data);
			if (*next == *current)
				return (0);
			a = a->next;
		}
		top = top->next;
		a = top;
	}
	return (1);
}

int	correct_order(t_data *a, t_data *b)
{
	t_data	*tmp;

	tmp = a->next;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	if (lst_len(b) == 1)
		return (1);
	return (0);
}

void	radix_sort(t_data *a, t_data *b)
{
	int		current;
	int		count;
	int		bit;

	bit = 1;
	while (!correct_order(a, b))
	{
		count = lst_len(a) - 1;
		while (count)
		{
			current = a->next->index;
			if (bit & current)
				ra(a);
			else
				pb(a, b);
			count--;
		}
		while (b->next)
			pa(a, b);
		bit = bit << 1;
	}
}
