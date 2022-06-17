/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:35:02 by jting             #+#    #+#             */
/*   Updated: 2022/06/17 12:21:20 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

int	ft_isnumerical(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	valid_int(long int n)
{
	if (n > 214783647 || n < -2147483648)
		return (0);
	return (1);
}

long int	push_atoi(char *s)
{
	int			i;
	int long	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	if (s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		result *= 10;
		result = result + s[i] - '0';
		i++;
	}
	return (result * sign);
}

int	check_valid(char *s, int ac)
{
	int	i;

	i = 0;
	while (s[i])
	{
		while (ac == 2 && s[i] == ' ')
			i++;
		if (!ft_isdigit(s[i]) && s[i] != '-')
			return (0);
		i++;
	}
	if (ac > 2 && !valid_int(push_atoi(s)))
		return (0);
	return (1);
}
