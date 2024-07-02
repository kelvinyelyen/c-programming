#include <stdio.h>

int main(){

    int num1, num2, subtract;

    printf("Enter the first value: ");
    scanf("%d", &num1);

    printf("Enter the second value:");
    scanf("%d", &num2);

    subtract = num1 - num2;

printf("the  result of %d -%d  is :%d/n" ,num1,num2,subtract);
return 0;
}
