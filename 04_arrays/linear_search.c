#include <stdio.h>

int main()
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], i, target, flag = 0;
   
    for (i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]); 
    }

    printf("Search: ");
    scanf("%d", &target);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Element %d found at index %d.\n", target, i);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
