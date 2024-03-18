// Double datatype
// If we want to store decimal values we use the double data type.

// Syntax to declare a double:

// double radius = 8.9;
// To print a double, we do:

// printf("%f", radius);

// // Output
// // 8.9
// Note that to print a double, we are using %f instead of %d. If you use %d to print a double value, the output will be very different.

#include <stdio.h>

int main() {

  double pi = 3.14;
  double radius = 8.9;
  double area = pi * radius * radius;

  printf("The Area of the given Circle is %f", area);
  
}