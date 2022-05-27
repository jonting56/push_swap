/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:11:02 by jting             #+#    #+#             */
/*   Updated: 2022/05/26 14:49:24 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// moves all elements up by one and 
void	ra(t_data *a)
{
	t_data	*last;
	t_data	*iter;

	if (lst_len(a) < 2)
		return ;
	iter = a;
	last = a->next;
	while (iter->next != NULL)
		iter = iter->next;
	a->next = a->next->next;
	iter->next = last;
	last->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_data *b)
{
	t_data	*last;
	t_data	*iter;

	if (lst_len(b) < 2)
		return ;
	iter = b;
	last = b->next;
	while (iter->next != NULL)
		iter = iter->next;
	b->next = b->next->next;
	iter->next = last;
	last->next = NULL;
	ft_printf("rb\n");
}

void	rra(t_data *a)
{
	t_data	*first;
	t_data	*iter;

	iter = a;
	while (iter->next->next)
		iter = iter->next;
	first = iter->next;
	iter->next = NULL;
	first->next = a->next;
	a->next = first;
}

void	rrb(t_data *b)
{
	t_data	*first;
	t_data	*iter;

	iter = b;
	while (iter->next->next)
		iter = iter->next;
	first = iter->next;
	iter->next = NULL;
	first->next = b->next;
	b->next = first;
}
