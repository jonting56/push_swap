/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:30:01 by jting             #+#    #+#             */
/*   Updated: 2022/06/17 13:20:17 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	*create_node(long int n)
{
	t_data	*node;

	node = (t_data *)malloc(sizeof(t_data));
	node->index = 0;
	node->data = n;
	node->next = NULL;
	return (node);
}

t_data	*single_str(char *s, t_data *a)
{
	char	**nums;
	t_data	*tmp;
	int		i;

	i = 0;
	tmp = a;
	nums = ft_split(s, ' ');
	while (nums[i])
	{
		if (!valid_int(push_atoi(nums[i])))
		{
			free_list(a);
			return (NULL);
		}
		tmp->next = create_node(push_atoi(nums[i]));
		tmp = tmp->next;
		i++;
	}
	return (a);
}

t_data	*init_lst(int ac, char **av)
{
	int		i;
	t_data	*a;
	t_data	*tmp;

	i = 1;
	a = create_node('a');
	tmp = a;
	if (ac == 2)
		return (single_str(av[1], a));
	while (i < ac)
	{
		if (!valid_int(push_atoi(av[i])))
		{
			free_list(a);
			return (NULL);
		}
		tmp->next = create_node(push_atoi(av[i]));
		tmp = tmp->next;
		i++;
	}
	return (a);
}

int	check_args(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (!check_valid(av[i], ac))
			return (0);
		i++;
	}
	return (1);
}
