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
#include  <stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s;
	char	*c;
	int	i;

	s = (char *)s1;
	c = (char *)s2;
	i = 0;
	while (i < (int)n)
	{
		if (s[i] != c[i])
      return (s[i] - c[i]);
		i++;
	}
	return (0);
}
