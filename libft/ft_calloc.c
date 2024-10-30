/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:10:43 by mquero            #+#    #+#             */
/*   Updated: 2024/10/30 14:27:52 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*ptr;
	size_t	n;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	n = nmemb * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}
