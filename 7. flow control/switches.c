#include <stdio.h>

int main(){
  int input;
  printf("number???\n");
  scanf("%d", &input);
  
  switch (input)
  { case 1:
    printf("one\n");
    break;
    case 2:
    printf("that's two\n");
    break;
    case 3:
    printf("oh that's too big!\n");
    break;
  default:
    printf("Gotta chill out with those big numbers bro\n");
    break;
  }
}