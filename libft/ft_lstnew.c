/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mqueri@student.fi>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:34:49 by mquero            #+#    #+#             */
/*   Updated: 2024/10/28 15:35:28 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*int main(void)
{
  void  *content = "hola";
  t_list *check = NULL;
  check = ft_lstnew(content);
  printf("%s\n", (char*)check->content);
  printf("%p\n", (char*)check->next);
}*/
