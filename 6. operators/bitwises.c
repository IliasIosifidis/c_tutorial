#include <stdio.h>

int main(){
  unsigned int a = 60; //0011 1100
  unsigned int b = 13; //0000 1101
  int c = 32;

  int result1 = a & b;
  printf("Result of & : %d\n", result1);

  int result2 = a | b;
  printf("Result of | : %d\n", result2);

  int result3 = c << 5;
  printf("Result of << : %d\n", result3);

  int result4 = c >> 1;
  printf("Result of >> : %d\n", result4);
}