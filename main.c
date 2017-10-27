#include <stdio.h>
#include <stdlib.h>
prime (int m,int n)
{
    int i;
    for(i=m;i<=n;i++)
    {
           int x,flag=0;
           for(x=2;x<=i/2;x++)
           {
                if(m%x==0)
                {
                    flag = 1;
                    break;
                }
            }

        if (flag == 0)
            {
                printf("%d",m);
            }
    }
}
int main()
{
    int fno,lno;
    printf("Enter first to check between = ");
    scanf("%d",&fno);
    printf("Enter last to check between = ");
    scanf("%d",&lno);
    prime(fno,lno);
    return 0;
}
