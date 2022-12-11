#include<stdio.h>
int main()
{
    int a[]={2,4,6,8,9};
    int *p=&a[4];
    for(int i=0;i<5;i++)
    {
        printf("%d ",*p);
        p--;
    }
}


