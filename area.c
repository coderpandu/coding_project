#include<stdio.h>

int main() {
    int length, width, area;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    printf("Area of rectangle is: %d\n", area);
    return 0;
}