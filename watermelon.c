#include<stdio.h>
int main()
{
    int a;
    printf("Enter the weight\n");
    scanf("%d",&a);
    if(a>=0 && a<=100)
    {
        if(a==2)
        {
            printf("NO\n");
        }
        else if(a%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    else
    {
        printf("Enter number between o and 100");
    }
    return 0;
}
