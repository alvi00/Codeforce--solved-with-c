//submitted on codefores and been accepted
#include<stdio.h>
int main()
{
    int a,b,c,n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c>=2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
