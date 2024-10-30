/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mqueri@student.fi>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:05:50 by mquero            #+#    #+#             */
/*   Updated: 2024/10/30 11:16:58 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	if (c == '\0')
		return ("\0");
	while (i < n)
	{
		if ((unsigned char)p[i] == c)
			return (p + i);
		i++;
	}
	return (NULL);
}
