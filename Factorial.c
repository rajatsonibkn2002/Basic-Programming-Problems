// Problem Link : https://www.hackerearth.com/problem/algorithm/fabonacci/?utm_source=header&utm_medium=search&utm_campaign=he-search
/*
  Author : Rajat Soni
*/

#include <stdio.h>
void main ()
{
  int i, n, fact = 1;
  scanf ("%d", &n);
  for (i = n; i >= 1; i--)
    {
      fact = fact * i;
    }
  printf ("%d", fact);
}
