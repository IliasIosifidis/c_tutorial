#include <stdio.h>

int main(){
  srand(time(NULL));
  int num = 0;
  int guessedNumber;
  num = (rand() % 20) +1;
  while (guessedNumber != num){
    scanf("%d", &guessedNumber);
    if (guessedNumber < num){
      printf("Go Higher\n");
    }
    if (guessedNumber > num){
      printf("Go Lower\n");
    }
  }
  printf("Correct: %d\n", num);
}