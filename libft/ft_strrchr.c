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

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;
	int		flag;

	i = 0;
	p = (char *)s;
	if (c == '\0')
		return ("\0");
	while (p[i])
	{
		if (p[i] == c)
			flag = i;
		i++;
	}
	return (p + flag);
}
