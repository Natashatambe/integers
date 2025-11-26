

int main() {
    float radius, area;
    float pi = 3.14159;

    // Taking input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculating area
    area = pi * radius * radius;

    // Displaying the result
    printf("Area of the circle = %.2f\n", area);

    return 0;
}
