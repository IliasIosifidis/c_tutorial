#include <stdio.h>

int main(){
  double years;
  int days;
  int minutes;
  printf("Minutes?\n");
  scanf("%d", &minutes);

  years = minutes / (60.0 * 24.0 * 365.0);
  days = (minutes / 60 / 24) % 365;
  printf("Minutes: %d\n = %f years\ndays %d\n", minutes, years, days);
}