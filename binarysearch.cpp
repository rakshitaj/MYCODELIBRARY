#include<stdio.h>

int bs(int ar[],int n,int key)     //iterative
{
    int low,high,mid;
    low=0;
    high=n;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (ar[mid]==key)
            return key;
        else if (key< ar[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int bsr (int ar[], int key, int low , int high) //recurssion
{
    if (low<=high)
    {
    int mid=(low+high)/2;
    if (ar[mid]== key)
        return ar[mid];
    else if (key< ar[mid])
        return bsr(ar,key,low,mid-1);
    else
        return bsr(ar,key,mid+1,high);
    }

else
    return -1;
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void check(int key)    //function if the key is present or no
{
    if (key>0)
        printf("%d is found\n",key);
    else
        printf("nope\n");
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10},key;
    display(arr,10);
    printf("Enter a key ");
    scanf("%d",&key);
    key=bs(arr,10,key);
    check(key);
    key=bsr(arr,key,0,10);
    check(key);

}
