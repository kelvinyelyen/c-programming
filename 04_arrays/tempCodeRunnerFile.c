#include <stdio.h>

int main()
{
    int size;
    int arr[size];     
    int i, target = 64, flag = 0;

    for (i = 0; i < size; i++)
    {
        printf("arr[i] = ", i);
        scanf("%d", &size);
    }

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
