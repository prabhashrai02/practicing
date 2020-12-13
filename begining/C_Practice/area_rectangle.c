#include<stdio.h>

int main ()
{
    int length, breadth;
    printf("Please enter the length & bradth of rectangle: \n");
    scanf("%d %d", &length, &breadth);

    printf("Area of the rectanle with length = %d & breadth = %d is %d \n", length, breadth, length*breadth);

    return 0;
}