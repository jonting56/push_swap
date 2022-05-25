/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:16:48 by jting             #+#    #+#             */
/*   Updated: 2022/05/25 16:02:19 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// pushes the top of a stack onto the top of b
void	pb(t_data *a, t_data *b)
{
	t_data	*a_data;

	if (b == NULL)
		return ;
	a_data = create_node(a->data);
	a_data->next = b;
	a = a->next;
	b = a_data;
	ft_printf("pb\n");
}
// pushes the top of b stack onto the top of a
int	pa(t_data *a, t_data *b)
{
	t_data	*b_data;

	b_data = create_node(b->data);
	b_data->next = a;
	b = b->next;
	a = b_data;
	ft_printf("pa\n");
	return (1);
}
// moves all elements up by one and 
void	ra(t_data *a)
{
	t_data	*tmp;
	t_data	*iter;

	if (lst_len(a) < 2)
		return ;
	tmp = a->next;
	iter = a;
	while (iter->next)
		iter = iter->next;
	iter->next = a;
	a->next = NULL;
	a = tmp;
	ft_printf("ra\n");
}

t_data	*rb(t_data *b)
{
	t_data	*tmp;
	t_data	*iter;

	if (lst_len(b) < 2)
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
