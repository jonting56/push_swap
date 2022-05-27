/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:11:02 by jting             #+#    #+#             */
/*   Updated: 2022/05/26 14:30:52 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lst(t_data *lst)
{
	t_data	*tmp;

	ft_printf("%c\n", lst->data);
	tmp = lst->next;
	while (tmp)
	{
		ft_printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
}
