/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mquero <mquero@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:27:33 by mquero            #+#    #+#             */
/*   Updated: 2024/10/29 11:31:54 by mquero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	new->next = *lst;
	*lst = new;
}

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
  t_list lst[2];
  t_list *s1 = ft_lstnew("hola");
  t_list *s2 = ft_lstnew("como");
  t_list *s3 = ft_lstnew("estás");
  s1->next = s2;
  s2->next = s3;
  s3->next = NULL;
  t_list *temp = s1;
  t_list *s4 = ft_lstnew("?");
  ft_lstadd_front(&s1, s4);
  while (temp != NULL)
  {
    printf("%s\n", (char*)s4->content);
  }
  while (s1 != NULL)
  {
    printf("%s\n", (char*)s1->content);
    s1 = s1->next;
  }
}*/
