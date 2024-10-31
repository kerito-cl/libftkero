/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:20:16 by mquero            #+#    #+#             */
/*   Updated: 2024/10/29 11:53:29 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (p[i])
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	if (p[i] == c)
		return (p + i);
	return (NULL);
}
/*int main(void)
{
  char  *str = "";
  printf("%s\n", ft_strchr(str, '\0'));
}*/
