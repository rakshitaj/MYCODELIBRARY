
#include <stdio.h>

void swaparray(int *a,int size)
{
    int i,j,temp;
    
    for (i=0,j=size-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    
}

void print(int ar[],int size)
{
    for (int i=0;i<size;i++)
        printf("%d ",ar[i]);
    printf("\n");
}
int main() {
   
    
    int ar[]={2,3,4,5,6,7,8};
    int size=sizeof(ar)/sizeof(ar[0]);
    print(ar,size);
    swaparray(&ar,size);
    print(ar,size);
    
    
    return 0;
}
