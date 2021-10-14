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

int iterfib(int n) //iterarive
{
    int f[n+1];
    f[0]=0;
    f[1]=1;
    
    for (int i=2;i<=n;i++)
        f[n]=f[n-1]+f[n-2];
    return f[n];
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
