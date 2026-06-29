#include <stdio.h>

int main(){
  int workHours;
  printf("work hours?\n");
  scanf("%d", &workHours);
  double wageGross = workHours * 12.0;
  double wageNet;


  if (workHours <= 40){
    wageNet = wageGross;
  } else {
    double overtimeGross = (workHours - 40) * (12.0 * 1.5);
    if (overtimeGross <= 300){
      wageNet = (overtimeGross * 0.85) + wageGross;
    } else if (overtimeGross <= 450) {
      wageNet = ((overtimeGross - 300) * 0.8) + wageGross;
    } else {
      wageNet = ((overtimeGross - 450) * 0.75) + wageGross;
    }
  }  
  printf("Wage Net: %.2f\n", wageNet);
}