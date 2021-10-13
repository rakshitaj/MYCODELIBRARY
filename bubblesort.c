#include<stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubblesort(int ar[], int n)

{
    printf("number of elements %d\n",n);
    for (int i=0;i<n-1;i++)
    {
        printf("pass %d\nvalue of index %d : %d\n",i+1,i+1,ar[i]);
        for (int j=0;j<n-i-1;j++)
        {
            if (ar[j+1]<ar[j])
                swap(&ar[j+1],&ar[j]);
            printf("swapped number %d, %d\n", ar[j+1], ar[j]);
        }

        display(ar,8);
        printf("\n");
    }
}

void display(int *ar,int n)
{
    for (int i=0;i<n;i++)
        printf("%d ",*(ar+i));
    printf("\n");
}

int main()
{
    int ar[8]={45,23,12,78,11,33,99,9};
    printf("Bubble sort\n");
    printf("before sorting\n");
    display(&ar,8);
    printf("\nsorting:\n");
    bubblesort(ar,8);
    printf("sorted array\n");
    display(ar,8);

}
