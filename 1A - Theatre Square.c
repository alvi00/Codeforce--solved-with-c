//submitted to codeforces been accepted
#include<Stdio.h>
int main()
{
    int n,m,a;
    long long sum,x,y;
    scanf("%d %d %d",&n,&m,&a);
    x=n/a;
    y=m/a;
    if(n%a!=0)
    {
        x++;
    }
    if(m%a!=0)
    {
        y++;
    }
    sum=x*y;
    printf("%lld",sum);
    return 0;

}
