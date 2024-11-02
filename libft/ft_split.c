/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:40:11 by mquero            #+#    #+#             */
/*   Updated: 2024/10/30 14:50:11 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static int	countarr(int n, const char *s, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			n++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (n);
}
static void	allocate(char **strsplit, char const *s, char c, int n)
{
	int	i;
	int	y;
	int	k;

	i = 0;
	y = 0;
	k = 0;
	while (i < n)
	{
		while (s[y] == c)
			y++;
		while (s[y] != c)
		{
			k++;
			y++;
		}
		strsplit[i] = (char *)malloc(k + 1);
		ft_strlcpy(strsplit[i], (s + y - k), k + 1);
		i++;
		k = 0;
	}
	strsplit[i] = (char *)NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strsplit;
	int		n;

	n = 0;
	n = countarr(n, s, c);
	strsplit = (char **)malloc((n + 1) * sizeof (char *));
	if (strsplit == NULL)
		return (NULL);
	allocate(strsplit, s, c, n);
	return (strsplit);
}
