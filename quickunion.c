#include "quickunion.h"

#include <stdio.h>

#define N 1000

void quickunion_f(void)
{
  int i, j, p, q, id[N];
  // init
  for (i = 0; i < N; ++i)
  {
    id[i] = i;
  }
  while (scanf("%d %d\n", &p, &q) == 2)
  {
    for (i = p; i != id[i]; i = id[i]);
    for (j = q; j != id[j]; j = id[j]);

    if (i == j) continue;
    id[i] = j;
    printf(" %d %d\n", p, q);
  }
}
