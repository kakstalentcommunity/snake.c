#include <stdio.h>
#include <math.h>

// Function to calculate the area of a triangle using Heron's formula
double calculateArea(double a, double b, double c) {
    // Calculate the semi-perimeter
    double s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main() {
    // Input the lengths of the sides of the triangle
    double sideA, sideB, sideC;

    printf("Enter the length of side A: ");
    scanf("%lf", &sideA);

    printf("Enter the length of side B: ");
    scanf("%lf", &sideB);

    printf("Enter the length of side C: ");
    scanf("%lf", &sideC);

    // Check if the input values form a valid triangle
    if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA) {
        // Calculate and display the area
        double area = calculateArea(sideA, sideB, sideC);
        printf("The area of the triangle is: %lf\n", area);
    } else {
        printf("Invalid input. The input values do not form a valid triangle.\n");
    }

    return 0;
}
