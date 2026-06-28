#include <stdio.h>

int main(int argc, char *argv[]){
  int numberOfArgs = argc;
  char *argument1 = argv[0];
  char *argument2 = argv[1];

  printf("Num of args: %d\n", numberOfArgs);
  printf("Arg 1 is the program's name: %s\n", argument1);
  printf("Arg 2 is the command line argument name: %s\n", argument2);
}