//Problem Link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/
/* 
    Author : Rajat Soni
*/

#include <stdio.h>
#include <string.h>
void main()
{
    int t, j, i, k, count, ans, l1, l2;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        count = 0;
        char a[10000], b[10000];
        scanf("%s", &a);
        scanf("%s", &b);
        l1 = strlen(a);
        l2 = strlen(b);
        if(l1<=l2)
        {
            for(j=0; j<l1; j++)
            {
                for(k=0; k<l2; k++)
                {
                    if(a[j] == b[k])
                    {
                        count++;
                        a[j] = 42;
                        b[k] = 43;
                    }
                }
            }
        }
        else
        {
            for(j=0; j<l2; j++)
            {
                for(k=0; k<l1; k++)
                {
                    if(b[j] == a[k])
                    {
                        count++;
                        b[j] = 42;
                        a[k] = 43;
                    }
                }
            }
        }
        ans = (l1+l2) - (2*count);
        printf("%d\n", ans);
    }
}
