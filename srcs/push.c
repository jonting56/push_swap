/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:16:48 by jting             #+#    #+#             */
/*   Updated: 2022/06/16 13:50:36 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// pushes the top of a stack onto the top of b
void	pb(t_data *a, t_data *b)
{
	t_data	*a_data;

	if (b == NULL)
		return ;
	a_data = create_node(a->next->data);
	a_data->index = a->next->index;
	a_data->next = b->next;
	b->next = a_data;
	a->next = a->next->next;
	ft_printf("pb\n");
}
// pushes the top of b stack onto the top of a

void	pa(t_data *a, t_data *b)
{
	t_data	*b_data;

	b_data = create_node(b->next->data);
	b_data->index = b->next->index;
	b_data->next = a->next;
	a->next = b_data;
	b->next = b->next->next;
	ft_printf("pa\n");
}

void	rr(t_data *a, t_data *b)
{
	t_data	*last;
	t_data	*iter;

	if (lst_len(a) < 2 || lst_len(b) < 2)
		return ;
	iter = a;
	last = a->next;
	while (iter->next != NULL)
		iter = iter->next;
	a->next = a->next->next;
	iter->next = last;
	last->next = NULL;
	iter = b;
	last = b->next;
	while (iter->next != NULL)
		iter = iter->next;
	b->next = b->next->next;
	iter->next = last;
	last->next = NULL;
	ft_printf("rr");
}
