#include<stdio.h>

int main() {
    int length, width, area, perimeter;
    printf("Enter length and width of rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Perimeter of rectangle is: %d\n", perimeter);
    printf("Area of rectangle is: %d\n", area);
    return 0;
}
