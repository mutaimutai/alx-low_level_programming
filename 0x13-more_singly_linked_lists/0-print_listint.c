size_t print_listint(const listint_t *h)
{
  int count;

  if (h == NULL)
  {
    printf("list is empty");
  }
  listint_t *ptr;
  ptr = h;
  while (ptr != NULL)
  {
    count++;
    ptr = ptr->next;
  }
  return (count);
}
