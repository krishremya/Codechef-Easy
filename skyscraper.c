#include <stdio.h>
int main()
{
    int m,n,tc,res=0;
    scanf("%d",&tc);
    for(int i=0;i<tc;i++)
    {
        scanf("%d%d",&m,&n);
        if(m>n)
        res=m-n;
        else
        res=n-m;
        printf("%d\n",res);
        }
        return 0;
}
 
