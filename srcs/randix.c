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

/*int	asc_order(t_data *a)
{
	t_data	*tmp;

	tmp = a->next;
	while (tmp)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
*/
int	correct_order(t_data *a, t_data *b)
{
	t_data	*tmp;

	tmp = a->next;
	while (tmp->next)
	{
		ft_printf("checking order\n");
		if (tmp->index > tmp->next->index)
			return (1);
		tmp = tmp->next;
	}
	if (lst_len(b) > 1)
		return (1);
	ft_printf("correct order\n");
	return (0);
}


void	radix_sort(t_data *a, t_data *b)
{
	t_data	*tmp;
	int		count;
	int		bit;

	bit = 0;
	tmp = a->next;
	ft_printf("Start radix\n");
	while (correct_order(a, b))
	{
		count = lst_len(a) - 1;
		ft_printf("Pre-radix\n");
		while (count)
		{
			tmp = tmp->next;
			if (!(tmp->index & (1 << bit)))
				pb(a, b);
			else
				ra(a);
			count--;
		}
		while (b->next)
			pa(a, b);
		bit++;
	}
}
