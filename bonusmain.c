t_list *ft_lstnew(void *content)
{
  t_list  *head;
  head = NULL;
  head = (t_list *)malloc(sizeof(t_list));
  if (head == NULL)
    return (NULL);
  head->content = content;
  head->next = NULL;
  return (head);
}
int main(void)
{
  t_list lst[2];
  t_list *s1 = ft_lstnew("hola");
  t_list *s2 = ft_lstnew("como");
  t_list *s3 = ft_lstnew("estás");
  s1->next = s2;
  s2->next = s3;
  s3->next = NULL;
  //t_list *s4 = ft_lstnew("?");
  ft_lstdelone(s1, del);
  while (s1 != NULL)
  {
    printf("%s\n", (char*)s1->content);
    s1 = s1->next;
  }
  printf("%s\n", (char*)s1->content);
}
