#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }
        printf("\n");
    }
}