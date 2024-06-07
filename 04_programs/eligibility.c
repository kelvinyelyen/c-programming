#include <stdio.h>

main()
{
    int math, phy, chem;
    printf("Enter your score in math: ");
    scanf("%d", &math);
    printf("Enter your score in physics: ");
    scanf("%d", &phy);
    printf("Enter your score in chemistry: ");
    scanf("%d", &chem);

    if (math >= 60 && phy >= 50 && chem >= 40)
        printf("You are eligible for this course.");
    else
        printf("You are not eligible for the course.\n");
}