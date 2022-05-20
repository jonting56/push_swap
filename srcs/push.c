/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:16:48 by jting             #+#    #+#             */
/*   Updated: 2022/05/20 16:42:55 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// pushes the top of b stack onto the top of a
int	pa(t_data *a, t_data *b)
{
	t_data	*tmp;

	if (lst_len(b) < 1)
		return (0);
	tmp = b->next;
	b->next = a;
	b = tmp;
	ft_printf("pa\n");
	return (1);
}
// pushes the top of a stack onto the top of b
int	pb(t_data *a, t_data *b)
{
	t_data	*tmp;

	if (lst_len(a) < 1)
		return (0);
	tmp = a->next;
	a->next = b;
	a = tmp;
	ft_printf("pb\n");
	return (1);
}
// moves all elements up by one and 
t_data	*ra(t_data *a)
{
	t_data	*tmp;
	t_data	*iter;

	if (lst_len(a < 2))
		return (NULL);
	tmp = a->next;
	iter = a;
	while (iter->next)
		iter = iter->next;
	iter->next = a;
	a->next = NULL;
	ft_printf("ra\n");
	return (tmp);
}

t_data	*rb(t_data *b)
{
	t_data	*tmp;
	t_data	*iter;

	if (lst_len(b < 2))
		return (NULL);
	tmp = b->next;
	iter = b;
	while (iter->next)
		iter = iter->next;
	iter->next = b;
	b->next = NULL;
	ft_printf("rb\n");
	return (tmp);
}

t_data *rr(t_data *a, t_data *b)
{
	ra(a);
	rb(b);
}
