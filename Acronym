// Problem Link :- https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/acronym-2/
/*
  Author :- Rajat Soni
*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
struct word
{
    char a[100];
};
int main()
{
    int k, n, i, l=0;
    char sent[100];
    cin>>k;
    struct word w[k];
    for(i=0; i<k; i++)
    {
        cin>>w[i].a;
    }
    cin>>n;
    cin.ignore();
    gets(sent);
    int m = 0, mw=0;
    struct word ww[100];
    for(i=0; i<strlen(sent); i++)
    {
        if(sent[i]==' ')
        {
            m++;
            mw=0;
        }
        else
        {
            ww[m].a[mw++] = sent[i];   
        }
    }
    for(i=0; i<n; i++)
    {
        int ch=0;
        for(int j=0; j<k&&ch==0; j++)
        {
            if(strcmp(ww[i].a, w[j].a)==0)
            {
                ch = 1;
                break;
            }
        }
        if(ch==0)
        {
            if(l==1)
                cout<<".";
            putchar(toupper(ww[i].a[0]));
            l = 1;
        }
    }
    return 0;
}
