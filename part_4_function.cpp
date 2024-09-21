#include <stdio.h>

// Function to calculate the area of a circle
float calculateArea(int radius) {
  float area = 3.14 * radius * radius;
  return area;
}

// Function to calculate the circumference of a circle
float calculateCircumference(int radius) {
  float cir = 2 * 3.14 * radius;
  return cir;
}

int main() {
  int radius;

  printf("Enter radius: ");
  scanf("%d", &radius);

  // Calculate the area and circumference using the defined functions
  float cir = calculateCircumference(radius);
  float area = calculateArea(radius);

  printf("Circle radius: %d\n", radius);
  printf("Circle area: %.2f\n", area);
  printf("Circle circum: %.2f\n", cir);

  return 0;
}