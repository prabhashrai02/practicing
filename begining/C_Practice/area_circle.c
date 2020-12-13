#include<stdio.h>

int main(){
    int d;
    float area= 0;
    float pi=3.14;
    printf("Please enter the radius of circle: ");
    scanf("%d", &d);
    area=d*d*3.14;
    printf("Area of circle with radius %d is %f", d, area);
return 0;
}