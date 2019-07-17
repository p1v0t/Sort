
#include <stdio.h>
#include "insertion.h"

int compare_integers(const void *lhs, const void *rhs)
{
  if(*(int *)lhs < *(int *)rhs)
    return -1;
  else if(*(int *)lhs > *(int *)rhs)
    return 1;
  else
    return 0;
}

int main()
{
    int ia[] = {-1, -12, 30};
    insertionSort(ia, 3, sizeof(int), compare_integers);
    printf("%d %d %d", ia[0], ia[1], ia[2]);
}
