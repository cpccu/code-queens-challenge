#include <stdio.h>

int main()
{
    int i,x,y,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        a[i]=x-y;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}