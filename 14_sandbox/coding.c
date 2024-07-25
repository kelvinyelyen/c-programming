
// functions
// dynamic memory allocation and pointers
// strings
// structures and union

// #include <stdio.h>

// main() {
//    int num1, num2, sum;

//    printf("Enter the first number: ");
//    scanf("%d", &num1);

//    printf("Enter second number: ");
//    scanf("%d", &num2);

//    sum = num1 + num2;

//    printf("The sum is %d\n", sum);
// }




//Second program
// #include <stdio.h>

// // Declaration
// int add(int a, int b, int t);
// main()
// {
//     int num1, num2, sum, f;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     sum = add(num1, num2, sum);
//     printf("The sum is %d\n", sum);
//     sub(num1, num2, f);
// }

// // Define Function
// int add(int a, int b, int t)
// {
//     t = a + b;
// }
// int sub(int a, int b, int c)
// {
//     c = a - b;
//     printf("The subtraction total is :%d\n", c);
// }


//Third program
// #include <stdio.h>

// // Declaration
// int add(int a, int b);
// int increment(int *a);
// main()
// {
//     int num1 = 5, num2 = 4, sum;
//     increment(&num1);
    
//     printf("The value is %d\n", add(num1, num2));

// }

// //Pass by value
// int add(int a, int b)
// {
//     return a + b;
// }

// //Pass by reference
// int increment(int *a)
// {
//     *a = *a + 1;
//     printf("The number is now (Increment) %d\n", *a);
// }


#include <stdio.h>
#include <stdlib.h>

main() {
    int *arr, n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated\n");
        exit(0);
    }

    printf("Enter the values: \n");
    for (i = 1; i <= n; i++) {
        printf("Array[%d] = ", arr[i]);
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= n; i++) {
        printf("%d \t", arr[i]); 
    }
    printf("\n");

    printf("Enter new size of array: ");
    scanf("%d", &n);

    arr = (int *)realloc(arr, n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory not reallocated\n");
        exit(0);
    }

    printf("Enter the values: \n");
    for (i = 1; i <= n; i++)
    {
        printf("Array[%d] = ", arr[i]);
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d \t", arr[i]);
    }=
    printf("\n");

    free(arr);
}