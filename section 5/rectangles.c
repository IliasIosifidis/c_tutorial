#include <stdio.h>

int main(){
  double width = 3;
  double height = 2;
  double perimeter = (width + height) *2;
  double area = width * height;
  printf("perimeter: %.2f,\narea: %.2f\n", perimeter, area);
}