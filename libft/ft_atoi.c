/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:48:36 by mquero            #+#    #+#             */
/*   Updated: 2024/10/30 11:08:12 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_long(const char *str, int i)
{
	int	k;

	k = 0;
	while (ft_isdigit(str[i - 1]) == 1)
	{
		i--;
		k++;
	}
	if (k < 19)
		return (2);
	else if (str[i + 1] == '0' && str[i + 2] == '0')
		return (2);
	else if (str[i - 1] == '-' && k >= 19)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			n;
	long long	hold;
	long long	k;

	i = 0;
	n = 1;
	hold = 0;
	k = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			n = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = hold * 10;
		hold = (str[i] - '0') + k;
		i++;
	}
	if (check_long(str, i) == 0 || check_long(str, i) == -1)
		return (check_long(str, i));
	return ((int)hold * n);
}
