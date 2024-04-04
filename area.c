#include <stdio.h>

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float pi = 3.14159; 
    float area = pi * radius * radius;
    
    printf("The area of the circle is: %f\n", area);
    
    return 0;
}
