/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:13:59 by mquero            #+#    #+#             */
/*   Updated: 2024/10/30 11:29:47 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s;
	char	*c;
	size_t	i;
	int		comparison;

	comparison = 0;
	s = (char *)s1;
	c = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (s[i] < c[i])
			comparison = s[i] - c[i];
		else if (c[i] < s[i])
			comparison = s[i] - c[i];
		i++;
	}
	return (comparison);
}
