#include <stdio.h>

int main()
{
    int i,x,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x<=10)
        {
            printf("YES");
        }
        else
        {
            printf("No");
        }
        printf("\n");
    }
    
    return 0;
}