#include<stdio.h>
int main()
{
    int n,remainder,sum=0;
    scanf("%d",&n);
    for(;n>0;n=n/10)
    {
        remainder=n%10;
        printf("%d",remainder);
    }
}