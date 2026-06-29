#include <stdio.h>

int main(){
  int testing;
  printf("Gimme numba: ");
  scanf("%d", &testing);
  
  if (testing == 0){
    printf("Zero\n");
  } else if (testing % 2 == 0){
    printf("Equal\n");
  } else {
    printf("That's odd\n");
  }
  
}