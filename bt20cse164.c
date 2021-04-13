#include "csl102lab0.h"
#include <stdio.h>
void swap(int *ptrFirst, int *ptrSecond, int *ptrThird)
{
  int t=0;
  t=*ptrFirst;
  *ptrFirst=*ptrThird;
  *ptrThird=*ptrSecond;
  *ptrSecond=t;
}
/*int main()
{
    int a = 2, b = 3, c = 4;
    swap(&a, &b, &c);
    printf("%d %d %d", a, b, c);
}*/