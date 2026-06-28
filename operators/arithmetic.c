#include <stdio.h>

int main(){
  int a = 80;
  int b = 24;
  int result = a % b;
  printf("Result: %d\n", ++result);

  _Bool bull = a < b;
  printf("boolean: %d\n", bull);
}