/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalise.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:02:08 by jting             #+#    #+#             */
/*   Updated: 2022/06/10 14:10:40 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(t_data *a)
{
	t_data	*tmp;
	int		min;

	min = 2147483647;
	tmp = a->next;
	while (tmp)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

int	find_next_min(t_data *a, int prev_min)
{
	t_data	*tmp;
	int		next_min;

	next_min = 2147483647;
	tmp = a->next;
	while (tmp)
	{
		if (tmp->data < next_min && tmp->data > prev_min)
			next_min = tmp->data;
		tmp = tmp->next;
	}
	return (next_min);
}

void	normalise(t_data *a)
{
	t_data	*tmp;
	int		i;
	int		min;

	i = 1;
	tmp = a->next;
	min = find_min(tmp);
	while (tmp)
	{
		if (tmp->data == min)
		{
			tmp->index = i;
			i++;
			min = find_next_min(a, tmp->data);
			tmp = a;
		}
		tmp = tmp->next;
	}
}
