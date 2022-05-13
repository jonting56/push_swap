/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:06:30 by jting             #+#    #+#             */
/*   Updated: 2022/05/13 15:08:33 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "push_swap.h"
# include "libft.h"
# include "ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_data
{
	int				data;
	struct s_data	*next;
}	t_data;

//int		check_valid(char **s, t_data *a);
t_data	*multi_str(int ac, char **av);
//int		single_str(char *s, t_data *a);
//int		valid_int(int n);
t_data	*create_node(int n);
//int		ft_isnumerical(char c);
//int		ft_isspace(char c);
#endif
