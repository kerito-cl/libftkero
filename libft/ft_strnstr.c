/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:43:45 by mquero            #+#    #+#             */
/*   Updated: 2024/10/30 11:21:30 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*empty;

	empty = "";
	i = 0;
	if ((char *)little == empty)
		return ((char *)big);
	while ((char)big[i])
	{
		j = 0;
		while (j < len - 1)
		{
			if ((char)little[j] == (char)big[i + j])
			{
				j++;
				if ((char)little[j] == '\0')
					return ((char *)big + i);
			}
			else if ((char)little[j] != (char)big[i + j])
				j = len;
		}
		i++;
	}
	return (NULL);
}
