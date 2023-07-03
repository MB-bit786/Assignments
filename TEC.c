//Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case .(Must Be Menu Driven)//
#include"header.h"
int main() 
{
    int choice;
    float base, height, side1, side2, side3, radius;
    printf("1. Area of Triangle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    printf("Enter your choice: ");
    scanf(" %d ", &choice);
    switch (choice) {
        case 1:
            printf("Enter the base of the triangle: ");
            scanf(" %f ", &base);
            printf("Enter the height of the triangle: ");
            scanf(" %f ", &height);
            float area = 0.5 * base * height;
            printf("The area of the triangle is %.2f\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf(" %f ", &side1);
            printf("Enter the breadth of the rectangle: ");
            scanf(" %f ", &side2);
            float area = side1 * side2;
            printf("The area of the rectangle is %.2f\n", area);
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf(" %f ", &radius);
            float area = 3.14 * radius * radius;
            printf("The area of the circle is %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}