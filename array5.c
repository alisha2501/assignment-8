//to find odd, even, positive or negative.//
#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Even numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]&1==1);
        else
           printf("%d ", arr[i]);
    }
    printf("\nOdd numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]&1==1)
            printf("%d ", arr[i]);
    }
    printf("\n positive numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
	    if(arr[i]>0)
		    printf("%d ", arr[i]);
    }
     printf("\n negative numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
            if(arr[i]<0)
                    printf("%d ", arr[i]);
    }

}

