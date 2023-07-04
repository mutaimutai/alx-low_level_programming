#include "lists.h"
size_t print_listint(const listint_t *h)
{
  size_t count = 0;
  const listint_t *ptr = 0;

  if (h == NULL)
  {
    printf("list is empty");
  }
  ptr = h;
  while (ptr != NULL)
  {
    count++;
    ptr = ptr->next;
  }
  return (count);
}
