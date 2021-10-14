#include <stdio.h>
long int fib(int n,long int c[])
{
    if (n<=1)
    {
        c[n]=n;
        return n;
    }
    
    else
    {
        if (c[n]==-1)
            {
                c[n]=fib(n-1,c)+fib(n-2,c);
                return c[n];
            }
        else
            return c[n];
    }
}
int main() {
  
    printf("Enter the nth number \n");
    int k;
    scanf("%d",&k);
    long int c[k+1];
    memset(c,-1,sizeof(c));  //set all the values of array equal to -1
    printf("%lld",fib(k,c));
    return 0;
}
