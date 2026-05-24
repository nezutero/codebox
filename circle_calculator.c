#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;
    double surfaceArea = 0.0;
    double volume = 0.0;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    printf("The area of the circle is %.2lf cm\n", area);

    surfaceArea = 4 * PI * pow(radius, 2);  
    printf("The surface area of the sphere is %.2lf cm^2\n", surfaceArea);

    volume = (3.0/4.0) * PI * pow(radius, 3);  
    printf("The volume of the sphere is %.2lf cm^3\n", volume);

    return 0;
}
