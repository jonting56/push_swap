/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:28:23 by jting             #+#    #+#             */
/*   Updated: 2022/06/16 15:47:23 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_len(t_data *a)
{
	t_data	*tmp;
	int		i;

	tmp = a;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	sa(t_data *a)
{
	int	tmp;
	int	index;

	if (lst_len(a) < 2)
		return ;
	tmp = a->next->data;
	index = a->next->index;
	a->next->data = a->next->next->data;
	a->next->next->data = tmp;
	a->next->next->index = index;
	ft_printf("sa\n");
}

void	sb(t_data *b)
{
	int	tmp;
	int	index;

	if (lst_len(b) < 2)
		return ;
	tmp = b->next->data;
	index = b->next->index;
	b->next->data = b->next->next->data;
	b->next->next->data = tmp;
	b->next->next->index = index;
	ft_printf("sb\n");
}

void	ss(t_data *a, t_data *b)
{
	int	tmp;
	int	index;

	if (lst_len(b) < 2 || lst_len(a) < 2)
		return ;
	tmp = b->next->data;
	index = b->next->index;
	b->next->data = b->next->next->data;
	b->next->next->data = tmp;
	b->next->next->index = index;
	tmp = a->next->data;
	index = a->next->index;
	a->next->data = a->next->next->data;
	a->next->next->data = tmp;
	a->next->next->index = index;
	ft_printf("ss\n");
}
