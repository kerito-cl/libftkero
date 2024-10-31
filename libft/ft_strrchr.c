/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:23:48 by mquero            #+#    #+#             */
/*   Updated: 2024/10/29 18:23:09 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		flag;

	flag = -1;
	i = 0;
	p = (char *)s;
	while (p[i])
	{
		if (p[i] == c)
			flag = i;
		i++;
	}
	if (p[i] == c)
		return (p + i);
	else if (flag != -1)
		return (p + flag);
	return (NULL);
}
