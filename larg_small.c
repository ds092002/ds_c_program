#include <stdio.h>
int findSmallest(int arr[], int a)
{
    int smallest = arr[0];
    for (int i = 0; i < a; ++i)
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int findLargest(int arr[], int a) 
{
    int largest = arr[0];
    for (int i = 0; i < a; ++i) 
    {
        if (arr[i] > largest) 
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main() 
{
    int a[50], i, n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i)
    {
        printf("Enter Number [%d]: ",i+1);
        scanf("%d", &a[i]);
    }

    int smallest = findSmallest(a, n);
    int largest = findLargest(a, n);

    printf("\nThe smallest element is %d\n", smallest);
    printf("\nThe largest element is %d\n", largest);

    
}
