#include <stdio.h>

int main(){
   double doub = (int) 21.12 + (int) 21.99;
   printf("%.2f\n", doub);

   printf("size of boolean: %d\n", sizeof(_Bool));
   printf("size of char: %d\n", sizeof(char));
   printf("size of short: %d\n", sizeof(short));
   printf("size of int: %d\n", sizeof(int));
   printf("size of double: %d\n", sizeof(double));
   printf("size of long: %d\n", sizeof(long));
   printf("size of long long: %d\n", sizeof(long long));
   printf("size of string: %d\n", sizeof("this is a string"));
}