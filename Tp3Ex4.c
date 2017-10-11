#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,s,j;

 for (i=1;i<=1000;i++){
    s=0;
    for(j=1;j<=i/2;j++){
    if (i%j==0) {
        s=s+j;
    }}
    if (s==i)
    {
        printf("%d est un nb parfait \n",i);
    }}

    return 0;
