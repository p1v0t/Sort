
#include <stdio.h>
#include <stdlib.h>
#include "qsort3way.h"

typedef struct country {
  char n[50];
  long m;
} Country;

static int cmp(const void *a, const void *b)
{
  if(((const Country *)a)->m < ((const Country *)b)->m) return +1;
  if(((const Country *)a)->m > ((const Country *)b)->m)
    return -1;
  else
    return 0;
}

int main(void)
{
  const int NUMLINES = 194;
  Country gdpRank[NUMLINES];

  FILE *o = NULL;
  if(!(o = fopen("out.dat", "w")))
    fprintf(stderr, "file couldn't opened %d\n", __LINE__);

  FILE *f = NULL;
  if(!(f = fopen("GDP.dat", "r")))
    fprintf(stderr, "file couldn't opened %d\n", __LINE__);

  {
    size_t i = 0;
    do {
      fscanf(f, "%s%ld", gdpRank[i].n, &gdpRank[i].m);
      ++i;
    } while(!feof(f));
  }

  qsort3way(gdpRank, NUMLINES, sizeof(Country), cmp);

  // source : http://databank.worldbank.org/data/download/GDP.pdf

  fprintf(o, "\n\n%s\n\n",
          "---------------Gross Domestic Product 2015---------------");
  fprintf(stdout, "\n\n%s\n\n",
          "---------------Gross Domestic Product 2015---------------");

  fprintf(o, "\n%s%11s%40s\n\n\n", "Rank", " Economy",
          "(millions of Economy US dollars)");
  fprintf(stdout, "\n%s%11s%40s\n\n\n", "Rank", " Economy",
          "(millions of Economy US dollars)");

  for(size_t i = 0; i < NUMLINES; ++i) {
    fprintf(stdout, "%-7zu %-27s %ld\n", i, gdpRank[i].n, gdpRank[i].m);
    fprintf(o, "%-7zu %-27s %ld\n", i, gdpRank[i].n, gdpRank[i].m);
  }

  fclose(o);
  fclose(f);

  return 0;
}
